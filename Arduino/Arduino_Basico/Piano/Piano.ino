// Variaveis para armazenar os pinos de cada componente conectado
const int pino_botao1 = 7;
const int pino_botao2 = 8;
const int pino_botao3 = 9;
const int pino_buzzer = 10; 
const int pino_led1 = 11;
const int pino_led2 = 12;
const int pino_led3 = 13;

// Frequencias de cada nota musical
const int c = 261; // Dó
const int d = 293; // Ré
const int e = 329; // Mi
const int f = 349; // Fá
const int g = 391; // Sol
const int a = 440; // Lá
const int b = 493; // Si

void setup(){
  // Configura os pinos
  pinMode(pino_botao1, INPUT_PULLUP); 
  pinMode(pino_botao2, INPUT_PULLUP); 
  pinMode(pino_botao3, INPUT_PULLUP); 
  pinMode(pino_buzzer, OUTPUT); 
  pinMode(pino_led1, OUTPUT); 
  pinMode(pino_led2, OUTPUT); 
  pinMode(pino_led3, OUTPUT); 
}

void loop() {
  if(digitalRead(pino_botao1) == LOW){
      tone(pino_buzzer, c);
      digitalWrite(pino_led1, HIGH);
      digitalWrite(pino_led2, LOW);
      digitalWrite(pino_led3,LOW);
    }
  else if(digitalRead(pino_botao2) == LOW){
      tone(pino_buzzer, d);
      digitalWrite(pino_led1, LOW);
      digitalWrite(pino_led2, HIGH);
      digitalWrite(pino_led3, LOW);
    }
    else if(digitalRead(pino_botao3) == LOW){
      tone(pino_buzzer, e);
      digitalWrite(pino_led1, LOW);
      digitalWrite(pino_led2, LOW);
      digitalWrite(pino_led3, HIGH);
    }
    else {
      noTone(pino_buzzer); 
      digitalWrite(pino_led1, LOW);
      digitalWrite(pino_led2, LOW);
      digitalWrite(pino_led3, LOW);
    }
}
