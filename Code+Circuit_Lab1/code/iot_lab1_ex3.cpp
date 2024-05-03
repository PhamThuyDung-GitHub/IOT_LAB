// Define LED pins
int ledPins[] = {8, 9, 10, 11, 12, 13};
int buttonPin = 2;
int lastButtonState = LOW; 
bool buttonHasBeenPressed = false;

void setup() {
  for (int i = 0; i < 6; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT);
  Serial.begin(9600); 
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH && lastButtonState == LOW) {
    delay(50); 
    buttonHasBeenPressed = !buttonHasBeenPressed; 
  }
  lastButtonState = buttonState; 

  if (buttonHasBeenPressed) {
    // Simulate dice rolling effect
    for (int i = 0; i < 6; i++) {
      digitalWrite(ledPins[i], HIGH); 
      delay(100); 
    }
    
    // Generate a random number to simulate the dice roll
    int roll = random(1, 7);
    for (int i = 0; i < roll; i++) {
      digitalWrite(ledPins[i], HIGH);
    }
    delay(1000); 

    // Blink all LEDs 6 times
    for (int blinkCount = 0; blinkCount < 6; blinkCount++) {
      for (int i = 0; i < 6; i++) {
        digitalWrite(ledPins[i], HIGH);
      }
      delay(200);
      for (int i = 0; i < 6; i++) {
        digitalWrite(ledPins[i], LOW);
      }
      delay(200);
    }
    
    for (int i = 0; i < 6; i++) {
      digitalWrite(ledPins[i], LOW);
    }
    buttonHasBeenPressed = false;
  }
}