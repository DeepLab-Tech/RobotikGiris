#include <Servo.h>
Servo motor;
int pot = A0;
int potDeger;

void setup()
{
  motor.attach(9);
  Serial.begin(9600);
}

void loop()
{
  potDeger = analogRead(pot);
  potDeger = map(potDeger, 0, 1023, 0, 180);
  motor.write(potDeger);
  delay(20);
  
  Serial.print("Aci = ");
  Serial.println(potDeger);
  delay(100);

  
}