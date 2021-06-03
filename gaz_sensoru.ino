int esikDegeri = 200; //Gaz esık degerı
int gazSensoru = A0;
int deger; 

void setup() 
{
Serial.begin(9600);
}
void loop() 
{
  deger = analogRead(gazSensoru); 
  Serial.print("Okunan Gaz Degeri = ");
  Serial.println(deger);
  
  if (deger > esikDegeri) { 
    Serial.println("Tehlikeli gaz miktari!");
  } else { 
    Serial.println("Gaz miktari normal seviyede.");
  }
}