#include <Servo.h>  // Servo kütüphanesi
Servo motor;  
int pos = 0;    

void setup() {
  motor.attach(9);  
}
void loop() {
  for (pos = 0; pos <= 180; pos += 1) { 
                                        
    motor.write(pos);              
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    motor.write(pos);              
    delay(15);                       
  }
}