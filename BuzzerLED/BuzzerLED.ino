int buzzpin=8;
int led=13;
void setup() {
  pinMode(buzzpin,OUTPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  digitalWrite(buzzpin,HIGH);
  digitalWrite(led,LOW);
  delay(1000);
  digitalWrite(buzzpin,LOW);
  digitalWrite(led,HIGH);
  delay(1000);
}
