int sensorvalue=0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorvalue=analogRead(A0);
  Serial.println(sensorvalue);
  if(sensorvalue<550)
  digitalWrite(8,HIGH);
  else
  digitalWrite(8,LOW);
  }
