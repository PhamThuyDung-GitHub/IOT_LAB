#include <ESP8266WebServer.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>

const char *ssid = "UiTiOt-E3.1";
const char *password = "UiTiOtAP";

ESP8266WebServer server(80);

const int ledPins[] = {D3, D4, D5, D6, D7};

int score = 0;
int remainingTime = 2000;
int selectedRemainder = -1;
int numOfFlashes;

void handleRoot()
{
    String content = "<!DOCTYPE html><html><head><meta name='viewport' content='width=device-width, initial-scale=1.0'></head><body style='font-family: Arial, sans-serif;'>";
    content += "<h1 style='background-color: blue; color: white; text-align: center;'>REMAINDER GAME</h1>";
    content += "<p style='background-color: green; color: white; padding: 10px;'>Current Score: " + String(score) + "</p>";
    content += "<p style='background-color: green; color: white; padding: 10px;'>Remaining Time: " + String(remainingTime / 1000) + " seconds</p>";
    content += "<div style='text-align: center;'>";
    content += "<label for='remainder'>Select the remainder:</label>";
    content += "<input type='number' id='remainder' min='0' max='3' style='margin-left:5px;'>";
    content += "<button onclick='submitRemainder()' style='margin-left:5px;'>Submit</button>";
    content += "</div>";
    content += "<script>function submitRemainder() {";
    content += "var remainder = document.getElementById('remainder').value;";
    content += "window.location.href = '/submit?remainder=' + remainder;";
    content += "}</script>";
    content += "</body></html>";
    server.send(200, "text/html", content);
}

void handleNotFound()
{
    String message = "File Not Found\n\n";
    message += "URI: ";
    message += server.uri();
    message += "\nMethod: ";
    message += (server.method() == HTTP_GET) ? "GET" : "POST";
    message += "\nArguments: ";
    message += server.args();
    message += "\n";
    for (uint8_t i = 0; i < server.args(); i++)
    {
        message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
    }
    server.send(404, "text/plain", message);
}

void setup()
{
    Serial.begin(9600);
    WiFi.begin(ssid, password);
    Serial.println("");

    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }
    Serial.println("");
    Serial.print("Connected to ");
    Serial.println(ssid);
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());

    for (int i = 0; i < 5; i++)
    {
        pinMode(ledPins[i], OUTPUT);
    }

    server.on("/", handleRoot);
    server.on("/submit", []()
              {
    selectedRemainder = server.arg("remainder").toInt();
    server.sendHeader("Location", "/");
    server.send(303); });
    server.onNotFound(handleNotFound);
    server.begin();
    Serial.println("HTTP server started");
}

void loop()
{
    server.handleClient();

    int randomLED;
    if (remainingTime > 0)
    {
        numOfFlashes = random(1, 6);
        for (int i = 0; i < numOfFlashes; i++)
        {
            randomLED = random(0, 5);
            digitalWrite(ledPins[randomLED], HIGH);
            delay(1000);
            digitalWrite(ledPins[randomLED], LOW);
            delay(1000);
        }
        remainingTime -= numOfFlashes * 2000;
        if (remainingTime < 0)
        {
            remainingTime = 0;
        }
    }
    else
    {
        if (selectedRemainder != -1)
        {
            if (selectedRemainder == (numOfFlashes % 3))
            {
                score++;
            }
            else
            {
                score--;
                if (score == 0)
                {
                    remainingTime = 2000;
                    server.sendHeader("Location", "/");
                    server.send(303);
                }
            }
            selectedRemainder = -1;
            remainingTime = 2000;
        }
    }
}