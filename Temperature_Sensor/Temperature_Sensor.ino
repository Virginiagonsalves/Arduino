#define sensor A0
float tempc;
float vout;
void setup() {
 pinMode(sensor,INPUT);
 Serial.begin(9600);

}

void loop() {
  vout=analogRead(sensor);
  tempc=(vout*250)/1203;
  Serial.print("Temperature in degreeC=");
  Serial.print("\t");
  Serial.println(tempc);
  delay(300);
}
