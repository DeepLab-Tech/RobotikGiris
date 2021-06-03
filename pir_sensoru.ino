int pir = 7;  
int deger = 0;             

void setup() {
  pinMode(pir, INPUT);     
  Serial.begin(9600);  
}

void loop(){
  deger = digitalRead(pir);  
  Serial.println(deger);          
  if (deger == HIGH) {            
    Serial.println("Hirsiz var!");  
  }
  else{
    Serial.println("Hirsiz yok!");  
  }
}