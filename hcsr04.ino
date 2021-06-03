int trigPin = 7;
int echoPin =6;

long sure;
long uzaklik;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delay(2); 
  digitalWrite(trigPin, HIGH);
  delay(10); 
  digitalWrite(trigPin, LOW);
  
  sure = pulseIn(echoPin, HIGH);
  uzaklik= sure/29.1/2 ;
  Serial.print("Mesafe = ");
  Serial.print(uzaklik);
  Serial.println(" cm");
}