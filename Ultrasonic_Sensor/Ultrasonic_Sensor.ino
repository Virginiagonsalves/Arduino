#define trig 8
#define echo 9
int duration=0;
int distance=0;
void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=(duration*0.034)/2;
  Serial.print(distance);
  Serial.println("CM");
  delay(100);
}
