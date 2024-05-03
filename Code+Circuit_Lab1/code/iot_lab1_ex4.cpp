int red = 4; 
int yell = 3; 
int green = 2; 
 
int a = 7;
int b = 8;
int c = 9;
int d = 10;
int e = 11;
int f = 12;
int g = 13;

void setup(){
  pinMode(red,OUTPUT);
  pinMode(yell,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  
}

void loop (){
  	// 7
  	digitalWrite(red,LOW); //green sequence
    digitalWrite(green,HIGH);
    digitalWrite(yell, LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    delay(1000);
    // 6
  	digitalWrite(red,LOW); //green sequence
    digitalWrite(green,HIGH);
    digitalWrite(yell, LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    delay(1000);
    // 5
  	digitalWrite(red,LOW); //green sequence
    digitalWrite(green,HIGH);
    digitalWrite(yell, LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    delay(1000);
    // 4
  	digitalWrite(red,LOW); //green sequence
    digitalWrite(green,HIGH);
    digitalWrite(yell, LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    delay(1000);
    // 3
  	digitalWrite(red,LOW); //green sequence
    digitalWrite(green,HIGH);
    digitalWrite(yell, LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
    delay(1000);
  	// 2
  	digitalWrite(red,LOW); //green sequence
    digitalWrite(green,HIGH);
    digitalWrite(yell, LOW);
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
    delay(1000);
  	// 1
    digitalWrite(red,LOW); //green sequence
    digitalWrite(green,HIGH);
    digitalWrite(yell,LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    delay(1000);
  // 0
    digitalWrite(red,LOW); //green sequence
    digitalWrite(green,HIGH);
    digitalWrite(yell,LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
    delay(1000);
  	//YELLOW
  	// 2
  	digitalWrite(red,LOW); //yellow sequence
    digitalWrite(green,LOW);
    digitalWrite(yell, HIGH);
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
    delay(1000);
  	// 1
    digitalWrite(red,LOW); //yellow sequence
    digitalWrite(green,LOW);
    digitalWrite(yell,HIGH);
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    delay(1000);
  // 0
    digitalWrite(red,LOW); //yellow sequence
    digitalWrite(green,LOW);
    digitalWrite(yell,HIGH);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
    delay(1000);
  	//RED
    // 9
  	digitalWrite(red,HIGH); //red sequence
    digitalWrite(green,LOW);
    digitalWrite(yell, LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    delay(1000);
   	// 8
  	digitalWrite(red,HIGH); //red sequence
    digitalWrite(green,LOW);
    digitalWrite(yell, LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    delay(1000);
  	// 7
  	digitalWrite(red,HIGH); //red sequence
    digitalWrite(green,LOW);
    digitalWrite(yell, LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    delay(1000);
    // 6
  	digitalWrite(red,HIGH); //red sequence
    digitalWrite(green,LOW);
    digitalWrite(yell, LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    delay(1000);
    // 5
  	digitalWrite(red,HIGH); //red sequence
    digitalWrite(green,LOW);
    digitalWrite(yell, LOW);
   	digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    delay(1000);
    // 4
  	digitalWrite(red,HIGH); //red sequence
    digitalWrite(green,LOW);
    digitalWrite(yell, LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    delay(1000);
    // 3
  	digitalWrite(red,HIGH); //red sequence
    digitalWrite(green,LOW);
    digitalWrite(yell, LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
    delay(1000);
  	// 2
  	digitalWrite(red,HIGH); //red sequence
    digitalWrite(green,LOW);
    digitalWrite(yell, LOW);
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
    delay(1000);
  	// 1
  	digitalWrite(red,HIGH); //red sequence
    digitalWrite(green,LOW);
    digitalWrite(yell, LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    delay(1000);
  // 0
  	digitalWrite(red,HIGH); //red sequence
    digitalWrite(green,LOW);
    digitalWrite(yell, LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
    delay(1000);
}