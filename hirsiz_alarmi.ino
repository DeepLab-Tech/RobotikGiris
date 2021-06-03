int pir = 7;  
int deger = 0; 
int kirmiziLed = 10;
int maviLed = 12;
int buzzer = 11;

void setup() {
  pinMode(pir, INPUT);
  pinMode(kirmiziLed, OUTPUT);
  pinMode(maviLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);  
}

void loop(){
  deger = digitalRead(pir);  
  Serial.println(deger);          
  if (deger == HIGH) {
    digitalWrite(buzzer, HIGH);
    digitalWrite(kirmiziLed, HIGH);
    digitalWrite(maviLed, LOW);
    delay(100);
    digitalWrite(kirmiziLed, LOW);
    digitalWrite(maviLed, HIGH);
    delay(100);
    Serial.println("Hirsiz var!");  
  }
  else{
    digitalWrite(kirmiziLed, LOW);
    digitalWrite(maviLed, LOW);
    digitalWrite(buzzer, LOW);
    Serial.println("Hirsiz yok!");  
  }
}