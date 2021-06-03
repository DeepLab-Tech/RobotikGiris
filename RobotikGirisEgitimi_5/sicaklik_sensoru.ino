int tmp = A0;
float sicaklik;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  sicaklik = analogRead(tmp);
  sicaklik = ((sicaklik*5.0)/1024);
  sicaklik = ((sicaklik - 0.5)*100);
  Serial.print("Sicaklik = ");
  Serial.println(sicaklik);
}
 