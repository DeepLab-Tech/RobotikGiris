#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int tmp = A0;
float sicaklik;

void setup() {
  
  lcd.begin(16,2);
  lcd.print("Sicaklik = ");
}

void loop() {
  
  lcd.setCursor(0,1);
  
  sicaklik = analogRead(tmp);
  sicaklik = ((sicaklik*5.0)/1024);
  sicaklik = ((sicaklik-0.5)*100);
  
  lcd.print(sicaklik);

}
 