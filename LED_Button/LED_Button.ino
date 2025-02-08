int buttonpin=10;
int led=13;
int buttonstate=0;
void setup() {
 pinMode(buttonpin,INPUT);
 pinMode(led,OUTPUT);
 Serial.begin(9600);
}

void loop() {
 buttonstate=digitalRead(buttonpin);
 Serial.print("Button status is:");
 Serial.println(buttonstate);
 if(buttonstate==HIGH)
 digitalWrite(led,HIGH);
 else
 digitalWrite(led,LOW);
 delay(500);

}
