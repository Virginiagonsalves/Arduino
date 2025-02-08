float voltage=0;
float sensorval=0;
int pot=A2;
void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorval=analogRead(pot);
  voltage=(sensorval*10/1023);
  Serial.print("Sensorval:");
  Serial.println(sensorval);
  Serial.print("Voltage is:");
  Serial.println(voltage);
  delay(2000);

}
