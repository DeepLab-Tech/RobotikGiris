int ldr = A0;
int isik;
int led = 7;

void setup() {
  
  pinMode(led, OUTPUT); 
  Serial.begin(9600); 
  
void loop() {
  isik = analogRead(ldr); 
  Serial.println(isik); 
  delay(50);
  
  if (isik > 600) { 
    digitalWrite(led, LOW); 
  } else { 
    digitalWrite(led, HIGH); 
  }
}