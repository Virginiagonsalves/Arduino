int buzzpin=8;
void setup() {
  pinMode(buzzpin,OUTPUT);
}

void loop() {
  digitalWrite(buzzpin,HIGH);
  delay(1000);
  digitalWrite(buzzpin,LOW);
  delay(1000);
}
