void setup() {

int sensor = 8;
pinMode(sensor,INPUT);
pinMode(3,OUTPUT);
}

void loop() {
int sensor = 8; if (digitalRead(sensor) == HIGH) digitalWrite(3,HIGH);

else digitalWrite(3,LOW);

}
