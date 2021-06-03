//LiquidCrystal ()
//lcd.begin() - boyut ayarlamak
//lcd.clear() 
//lcd.print()
//lcd.home() - imleç ekranın sol üstüne taşınır
//lcd.setCursor() - imlecin konumunu belirlememizi sağlar
//lcd.display() 
//lcd.noDisplay()
//lcd.scrollDisplayLeft() - sola kayan yazı
//lcd.scrollDisplayRight() - saga kayan yazı
//lcd.autoscroll()
//lcd.cursor()- imlec görüntüsü açılır
//lcd.noCursor() - imlec görüntüsü kapatılır

#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  
  lcd.begin(16,2);
  lcd.print("Robotik");

}

void loop() {
  
  lcd.cursor();
  delay(500);
  lcd.noCursor();
  delay(500);
  

}
 