const int pinoLDR = A0;
const int pinoBUZZER = 12;
const int pinoBUTTON = 11;
int leitura = 0;
int frequencia = 2000;
boolean botao = false;


void setup() {
  Serial.begin(9600);
  pinMode(pinoLDR, INPUT);
  pinMode(pinoBUZZER, OUTPUT);
  pinMode(pinoBUTTON, INPUT_PULLUP);
}

void loop() {
  leitura = analogRead(pinoLDR);
  botao = digitalRead(pinoBUTTON);

  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("\n");

  if(leitura <= 512){
    tone(pinoBUZZER, frequencia);
    }
  else if(botao == LOW){
     noTone(pinoBUZZER);
    }

    delay(100);

}
