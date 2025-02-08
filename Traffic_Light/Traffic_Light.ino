int Led1=11;
int Led2=12;
int Led3=13;
void setup() {
 pinMode(Led1,OUTPUT);
pinMode(Led2,OUTPUT);
pinMode(Led3,OUTPUT);
}

void loop() {
 digitalWrite(Led1,HIGH);
delay(3000);
digitalWrite(Led1,LOW);

digitalWrite(Led2,HIGH);
delay(3000);
digitalWrite(Led2,LOW);

digitalWrite(Led3,HIGH);
delay(3000);
digitalWrite(Led3,LOW);

}
