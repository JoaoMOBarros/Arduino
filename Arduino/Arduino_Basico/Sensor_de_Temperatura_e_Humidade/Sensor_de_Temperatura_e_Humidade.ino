#include "DHT.h";

const int pinoLR = 9;
const int pinoLG = 10;
const int pinoLB = 11;

const int pinoBuzzer = 8;
const int pinoDht = 2;

float temperatura;
float humidade;

DHT dht(pinoDht, DHT11);

void setup() {
  Serial.begin(9600);
    
  pinMode(pinoLR, OUTPUT);
  pinMode(pinoLG, OUTPUT);
  pinMode(pinoLB, OUTPUT);
  pinMode(pinoBuzzer, OUTPUT);

  dht.begin();
}

void loop() {
  delay(2000);
  temperatura = dht.readTemperature();
  humidade = dht.readHumidity();


  if(isnan(temperatura)||isnan(humidade)){
    digitalWrite(pinoLR, HIGH);
    digitalWrite(pinoLG, HIGH);
    digitalWrite(pinoLB, HIGH);
    }
   else {
    if (temperatura > 35 || temperatura < 15) {
      digitalWrite(pinoLR, HIGH);
      digitalWrite(pinoLG, LOW);
      digitalWrite(pinoLB, LOW);
      tone(pinoBuzzer, 2000);
      delay(1000);
    }
    else if (temperatura > 30 || temperatura < 20) {
      digitalWrite(pinoLR, LOW);
      digitalWrite(pinoLG, LOW);
      digitalWrite(pinoLB, HIGH);
      tone(pinoBuzzer, 1000);
      delay(500);
    }
    else {
      // Acende verde
      digitalWrite(pinoLR, LOW);
      digitalWrite(pinoLG, HIGH);
      digitalWrite(pinoLB, LOW);
    }
   }
    noTone(pinoBuzzer);  
 }
