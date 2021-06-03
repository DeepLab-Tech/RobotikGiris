int ldr = A0;
int isik;

void setup() 
{
  
  Serial.begin(9600); /
}
void loop() 
{
  isik = analogRead(ldr); 
  Serial.println(isik); 
  delay(50);
  
}