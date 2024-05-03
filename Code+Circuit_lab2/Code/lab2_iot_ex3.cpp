int ledPin = 12; // LED on Pin 12 of Arduino
int pirPin = 7;  // Input for HC-S501

int pirValue; // Place to store read PIR Value

void setup()
{

    pinMode(ledPin, OUTPUT);
    pinMode(pirPin, INPUT);
    digitalWrite(ledPin, LOW);
}

void loop()
{
    pirValue = digitalRead(pirPin);
    digitalWrite(ledPin, pirValue);
}