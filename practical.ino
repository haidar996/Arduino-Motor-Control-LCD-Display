

#include<LiquidCrystal.h>
LiquidCrystal lcd(0,1,3,4,5,6);
volatile byte state1=LOW;
volatile byte state2=HIGH;
volatile byte state3=LOW;
volatile byte state4=HIGH;
double x,y;
void setup() {
  

lcd.begin(16,2);

lcd.print("kljlk");
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(A0,INPUT);
pinMode(A1,INPUT);

attachInterrupt(0,ISR1,RISING);
}

void loop() {
  
digitalWrite(13,state1);
digitalWrite(12,state2);
analogWrite(11,255);
digitalWrite(8,state3);
digitalWrite(9,state4);
analogWrite(10,255);

lcd.setCursor(0,0);
if (state1==LOW){lcd.print(" CCW CW");}
else {lcd.print(" CW CCW");}
lcd.setCursor(0,1);
x=analogRead(A0);
y=analogRead(A1);

  lcd.print( x/4.011);
  lcd.setCursor(10,1);
  lcd.print( y/4.011);
  
}

void ISR1(){

state1=!state1;
state2=!state2;
state3=!state3;
state4=!state4;

}
