#include "SoftwareSerial.h"

SoftwareSerial ESP_Serial(10, 11); // RX, TX

String resposta = "";

void setup(){
  Serial.begin(9600);
  ESP_Serial.begin(9600);

  Serial.println("Inicializando...");
  delay(1000);

  Serial.println("Chamando com AT...");
  sendCommand("AT");
  readResponse(1000);

  Serial.println("Mudando modo para 1");
  sendCommand("AT+CWMODE=1");
  readResponse(1000);

  Serial.println("Verificando redes...");
  sendCommand("AT+CWLAP");
  readResponse(7500);
}

void loop(){
}

void sendCommand(String cmd){
  ESP_Serial.println(cmd);
  }

void readResponse(unsigned int timeout){
   unsigned long timeIn = millis();
  resposta = "";
  while (timeIn + timeout > millis()) {
    if (ESP_Serial.available()) {
      char c = ESP_Serial.read();
      resposta += c;
    }
  }
  Serial.println(resposta);
  }
