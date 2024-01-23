#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int led = 13;
int pirPin = 8;
int state = LOW;
int val = 0;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(pirPin,INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 1);
  val = digitalRead(pirPin);
  if(val == HIGH){
    digitalWrite(led,HIGH);
    delay(100);
    if(state == LOW){
      Serial.println("Motion detected!");
      lcd.print("Motion detected!");
      state == HIGH;
      
    }
  }
  else{
    digitalWrite(led,LOW);
    
    if(state == HIGH){
      Serial.println("Motion stopped!");
      lcd.print("Motion stopped!");
      state = LOW;
      
    }
    
  }
  }
