int pir = 7;  
int deger = 0; 
int led = 10;

void setup() {
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);  
}

void loop(){
  deger = digitalRead(pir);  
  Serial.println(deger);          
  if (deger == HIGH) {
    digitalWrite(led, HIGH);
    Serial.println("Hirsiz var!");  
  }
  else{
    digitalWrite(led, LOW);
    Serial.println("Hirsiz yok!");  
  }
}