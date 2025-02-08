int buttonpin=10;
int buttonstate=0;
void setup() {
 pinMode(buttonpin,INPUT);
 Serial.begin(9600);
}

void loop() {
 buttonstate=digitalRead(buttonpin);
 Serial.print("Button status is:");
 Serial.println(buttonstate);
 delay(500);

}
