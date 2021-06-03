#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int trigPin = 10;
int echoPin = 9;
int sure;
float uzaklik;


void setup() {
  
  lcd.begin(16,2);
  lcd.print("Uzaklik = ");
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  
  digitalWrite(trigPin, LOW);
  delay(2);
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);
  
  sure = pulseIn(echoPin, HIGH);
  uzaklik = (sure/29.1/2);
  
  lcd.setCursor(0, 1);
  lcd.print(uzaklik);
  lcd.print(" cm");
  
  Serial.print("Uzaklik = ");
  Serial.print(uzaklik);
  Serial.println(" cm");
  

}
 