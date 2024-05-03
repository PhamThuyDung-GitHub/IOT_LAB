#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>
#include <Wire.h>
#include <BH1750.h>

// WiFi credentials and server URL
const char* ssid = "Thuong_Phone";
const char* password = "nhatthuong2002";
const char* serverName = "http://127.0.0.1:5000/sensor";

// Create a WiFi client and BH1750 object
WiFiClient client;
BH1750 lightMeter(0x23);  // Default I2C address of the BH1750

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  
  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    Serial.println(" Connecting to WiFi...");
  }
  Serial.println(" Connected to WiFi");

  // Initialize I2C communication
  Wire.begin(D2, D1);  // SDA, SCL
  if (!lightMeter.begin(BH1750::CONTINUOUS_HIGH_RES_MODE)) {
    Serial.println("[BH1750] Initialization failed!");
  } else {
    Serial.println("[BH1750] Sensor started.");
  }

  // Initialize LED pins
  pinMode(D4, OUTPUT); // LED 1
  pinMode(D5, OUTPUT); // LED 2
  pinMode(D6, OUTPUT); // LED 3
  digitalWrite(D4, LOW); // Ensure LEDs are off initially
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
}

void loop() {
  float lux = lightMeter.readLightLevel(); // Read light level from BH1750
  
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin(client, serverName);
    http.addHeader("Content-Type", "application/json");

    // Prepare JSON document
    DynamicJsonDocument doc(1024);
    doc["data"]["light"] = lux;  // Send light level in lux
    String requestBody;
    serializeJson(doc, requestBody);

    // Print the JSON payload to the Serial Monitor
    Serial.println("Sending JSON data to server:");
    Serial.println(requestBody);

    // Send the request
    int httpResponseCode = http.POST(requestBody);
    if (httpResponseCode > 0) {
      String response = http.getString();
      Serial.println("Server response:");
      Serial.println(response);

      // Parse the response JSON and control LEDs accordingly
      DynamicJsonDocument resDoc(1024);
      deserializeJson(resDoc, response);
      int leds_on = resDoc["data"]["leds_on"];
      digitalWrite(D4, leds_on > 0 ? HIGH : LOW);
      digitalWrite(D5, leds_on > 1 ? HIGH : LOW);
      digitalWrite(D6, leds_on > 2 ? HIGH : LOW);
    } else {
      // Print HTTP error code
      Serial.print("HTTP Error: ");
      Serial.println(httpResponseCode);
    }
    http.end();
  }
  delay(5000); // Send data every 5 seconds
}
