#define led 10
#define pot A0
float outputvalue=0;
int sensorval=0;
void setup() {
 pinMode(led,OUTPUT);
 Serial.begin(9600);

}

void loop() {
 sensorval=analogRead(pot);
 outputvalue=map(sensorval,0,1023,0,255);
 analogWrite(led,outputvalue);
 Serial.print("Sensor=");
 Serial.println(sensorval);
 delay(500);

}
