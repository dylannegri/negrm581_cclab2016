int TouchSensor = 3;
int led = 13;

void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(TouchSensor, INPUT);
}

void loop(){

  if(digitalRead(TouchSensor)==HIGH)
  {
  digitalWrite(led,HIGH);  
  Serial.println("led ON");
  }
  else
  {
  digitalWrite(led, LOW);
  Serial.println("led OFF");
}
delay(250);
}
