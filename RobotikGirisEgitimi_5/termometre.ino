
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int tmp = A1;
float sicaklik;

void setup() {
  
  lcd.begin(16,2);
  lcd.print("Sicaklik : ");
  Serial.begin(9600);
  
}

void loop() {
  
  sicaklik = analogRead(tmp);
  sicaklik = ((sicaklik*5.0)/1024);
  sicaklik = ((sicaklik-0.5)*100);
  
  lcd.setCursor(0,1);
  lcd.print(sicaklik);
  
  Serial.print("Sicaklik : ");
  Serial.println(sicaklik);
  
  
}
 