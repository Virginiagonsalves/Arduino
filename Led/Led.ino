int Led=13;
void setup() {
  pinMode(Led,OUTPUT);

}

void loop() {
 digitalWrite(Led,HIGH);
delay(60000);
digitalWrite(Led,LOW);
delay(6000);


}
