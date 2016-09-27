  int buttonPin = 7;
  int ledPin1 = 13;
  int ledPin2 = 12;
  boolean on = false;
  int buttonState = 0;
 
 void setup() {
  // put your setup code here, to run once:
  //pinMode(13, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {

    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
     if (on==true) {
      on=false;
    } else {
      on=true;
    }
}

  if (on==true){
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2,LOW);
  } else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2,HIGH);
  }
  delay(200);
}

