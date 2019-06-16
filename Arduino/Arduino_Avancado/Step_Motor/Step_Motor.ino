const int pot = A0;
int i;
int pins[] = {8,9,10,11};
int velocidade = 0;

void setup() {
  Serial.begin(9600);
  for( i=0 ; i < 4 ; i++ ){
    pinMode(pins[i],OUTPUT); // Configura os pinos como saída
  }
}

void loop() {

  
  velocidade = 10;
      

    Serial.println("Horario");
    Serial.println(velocidade);
    for( i=0 ; i < 4 ; i++ ){  // Intercala o as bobinas acionadas
       digitalWrite(pins[i],HIGH); // Envia um pulso de um passo
       delay(velocidade); 
       digitalWrite(pins[i],LOW);
        }
}
