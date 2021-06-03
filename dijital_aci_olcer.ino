#include <Servo.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
Servo motor;
int pot = A1;
float potDeger;


void setup() {
  
  lcd.begin(16,2);
  lcd.print("Olculen Aci: ");
  motor.attach(9);
  Serial.begin(9600);
  
}

void loop() {
  
  lcd.setCursor(0,1);
  potDeger = analogRead(pot);
  potDeger = map(potDeger, 0, 1023, 0, 180);
  motor.write(potDeger);
  delay(100);
  
  lcd.print(potDeger);
  Serial.print("Olculen Aci = ");
  Serial.println(potDeger);
  
}
 