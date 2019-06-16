const int Receptor = A0;
const int Led = 2;
int ValorSensor = 0;  

void setup() {
  Serial.begin(9600);
  pinMode(Receptor, INPUT);
  pinMode(Led, OUTPUT);
}

void loop() {
  
  Serial.print("Valor lido: ");
  ValorSensor = analogRead(Receptor);    
  Serial.println(ValorSensor);
  
  if(ValorSensor > 800){
    digitalWrite(Led, HIGH);
    }
  else{
    digitalWrite(Led, LOW);
    }
   delay(1000);
}
