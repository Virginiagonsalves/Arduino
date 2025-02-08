#include<LiquidCrystal.h>  
 LiquidCrystal lcd(12, 11, 10, 9, 8, 7);  
 int i =0,j=0,k=0,a[12],h=0;  
 int up = 6,down = 5,set = 4;   
 void setup(){   
  lcd.begin(16,2);  
  pinMode(up,INPUT);  
  pinMode(down,INPUT);  
  pinMode(set,INPUT);  
  pinMode(3,OUTPUT);  
  digitalWrite(up,HIGH);  
  digitalWrite(down, HIGH);  
  digitalWrite(set,HIGH);  
  }  
 void loop()  
 {  
  lcd.setCursor(0,0);  
  lcd.print("set no.of periods:");  
  while(1){  
  lcd.setCursor(0,1);  
  lcd.print(i);  
   if( digitalRead(up) == LOW){  
    delay(300);  
    i++;  
   }  
    if( digitalRead(down) == LOW){  
    delay(300);  
    i--;  
   }  
   if(digitalRead(set) == LOW){  
    delay(300);  
    break;  
   }  
  }  
   lcd.clear();  
   lcd.setCursor(1,0);  
   lcd.print("set time for ");  
   lcd.setCursor(0,1);  
   lcd.print("each period ");  delay(1500);  
   lcd.clear();  
   for(int j =1; j < i+1;j++)  
  {  
   lcd.setCursor(1,0);  
   lcd.print("period");  
   lcd.setCursor(10,0);  
   lcd.print(j);  
  while(1)  
  { lcd.setCursor(0,1);  
    lcd.print(k);  
   if( digitalRead(up) == LOW)  
   {delay(300);  
    k=k+10;  
   }  
   if( digitalRead(down) == LOW){  
    delay(300);  
    k= k-10;  
    if(k < 0)  
    {  
     k= -1*k;  
    }  
   }  
   if ( digitalRead(set) == LOW)  
   {delay(300);  
    break;  
   }  
  }  
  a[j] = k;  
  k = 0;  
  }  
  lcd.clear();  
  for( j =1 ; j<i+1 ;j++){  
   lcd.setCursor(1,0);  
   lcd.print("Period:");  
   lcd.setCursor(10,0);  
   lcd.print(j);  
   for(h =0;h<a[j]+1;h++){  
    if( h == a[j])  
   {  
    tone(3, 200);  
   delay(3000);  
   noTone(3);   
   }  
   lcd.setCursor(0,1);  
   lcd.print(h);  
   delay(1000);  
   }  
  lcd.clear();  
 }  
 lcd.clear();  
 i=0;  
 j=0;  
 k=0;  
  } 
