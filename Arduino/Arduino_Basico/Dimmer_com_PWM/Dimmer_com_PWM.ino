/*******************************************************************************
* RoboCore Kit Iniciante V8 - 16. - Pisca-Pisca
* Usar um potenciômetro para controlar o período com que um LED pisca.
*******************************************************************************/

const int pinoPotenciometro = A0; // pino onde o pontenciômetro está conectado
const int pinoLED = 11; // pino onde o LED está conectado
int leitura = 0;
int pwm = 0; // variável para armazenar o valor lido pelo ADC

void setup() {
  pinMode(pinoPotenciometro, INPUT); // configura o pino com potenciômetro como entrada
  pinMode(pinoLED, OUTPUT); // configura o pino com o LED como saída
}

void loop() {
  leitura = analogRead(pinoPotenciometro);
  pwm = map(leitura,0,1023,0,255);
  analogWrite(pinoLED, pwm);
    
}
