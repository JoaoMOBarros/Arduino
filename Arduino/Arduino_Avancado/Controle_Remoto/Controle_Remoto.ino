#include "IRremote.h"
const int Rele = 12;
const int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); //começa a receber
  pinMode(Rele, OUTPUT);
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
   
    if (results.value == 0xFF30CF){
      digitalWrite(Rele, HIGH);
      Serial.write("Power on"); 
    }
    
    if (results.value == 0xFF18E7){
      digitalWrite(Rele, LOW);
      Serial.write("Power off"); 
    }
   
    irrecv.resume(); // Recebe o próximo valor
  }
}
