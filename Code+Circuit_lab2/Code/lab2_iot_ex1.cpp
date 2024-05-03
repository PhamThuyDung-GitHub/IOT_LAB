#define trigPin 3
#define echoPin 2
int red1 = 13;
int red2 = 11;
int red3 = 9;
int red4 = 7;
int red5 = 5;
void setup()
{
pinMode(red1,OUTPUT);
pinMode(red2,OUTPUT);
pinMode(red3,OUTPUT);
pinMode(red4,OUTPUT);
pinMode(red5,OUTPUT);
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}
void loop()
{
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if (distance >= 46 || distance < 0)
  {
  		Serial.println("Out of range");
       digitalWrite(red1,LOW);
       digitalWrite(red2,LOW);
       digitalWrite(red3,LOW);
       digitalWrite(red4,LOW);
       digitalWrite(red5,LOW);
  }
  else if(distance >= 0 && distance <=7) 
  { 
      Serial.print(distance);
  		Serial.println(" cm");
    	digitalWrite(red1,HIGH);
       digitalWrite(red2,HIGH);
       digitalWrite(red3,HIGH);
       digitalWrite(red4,HIGH);
       digitalWrite(red5,HIGH);
  } else if(distance >=8 && distance <=15){ 
      Serial.print(distance);
      		Serial.println(" cm");
		digitalWrite(red1,HIGH);
       digitalWrite(red2,HIGH);
       digitalWrite(red3,HIGH);
       digitalWrite(red4,HIGH);
       digitalWrite(red5,LOW);
  }
  else if(distance >=16 && distance <=25){
      Serial.print(distance);
  		Serial.println(" cm");
		digitalWrite(red1,HIGH);
       digitalWrite(red2,HIGH);
       digitalWrite(red3,HIGH);
       digitalWrite(red4,LOW);
       digitalWrite(red5,LOW);
  }
  else if(distance >=26 && distance <=35){ 
      Serial.print(distance);
  		Serial.println(" cm");
		digitalWrite(red1,HIGH);
       digitalWrite(red2,HIGH);
       digitalWrite(red3,LOW);
       digitalWrite(red4,LOW);
       digitalWrite(red5,LOW);
  }
  else if(distance >=26 && distance <=45){
      Serial.print(distance);
  		Serial.println(" cm");
		digitalWrite(red1,HIGH);
       digitalWrite(red2,LOW);
       digitalWrite(red3,LOW);
       digitalWrite(red4,LOW);
       digitalWrite(red5,LOW);
  }
  delay(100);
}