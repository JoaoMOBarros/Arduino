/*******************************************************************************
* RoboCore Kit Iniciante V8 - 26. Projeto Garra Robótica
* Controla a garra robótica com o joystick
*******************************************************************************/

#include <Servo.h> //Inclui biblioteca para servo motor

const int SW = 2; // Pino para o botão do joystick
const int PIN_SERVO = 9; // Pino de comandos para o servo motor
const int VRX = A4; // Pino para leitura do eixo X
const int VRY = A5; // Pino para leitura do eixo Y

const int CLOSE = 166; // Limite de fechamento do servo
const int OPEN = 90; // Limite de abertura do servo


int leitura_vrx; // Variável de armazenamento do Eixo X
int leitura_vry; // Variável de armazenamento do Eixo Y
int leitura_sw; // Variável de armazenamento da leitura do botão

Servo servo_motor;

void setup() {
  Serial.begin(9600);
  pinMode(VRX, INPUT);
  pinMode(VRY, INPUT);
  pinMode(SW, INPUT_PULLUP);
  servo_motor.attach(PIN_SERVO);
}

void loop() {

  leitura_vry = analogRead(VRY);
  leitura_vrx = analogRead(VRX);
  leitura_vry = map(leitura_vry, 0, 1023, CLOSE, OPEN);  // Converte valor do potenciometro


  int leitura_sw = digitalRead(SW);
  servo_motor.write(leitura_vry);

  Serial.print("fora");

  Serial.println(leitura_sw);
  

  if(leitura_sw == LOW){
    leitura_sw = HIGH;
    while(leitura_sw == HIGH){
      delay(10);
      leitura_sw = digitalRead(SW);
      }
    }

    delay(10);
 }
