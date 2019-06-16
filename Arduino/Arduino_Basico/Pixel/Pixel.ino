const int pinoBR = 7;
const int pinoBG = 6;
const int pinoBB = 5;
const int pinoBReg = 4;
const int pinoLR = 11;
const int pinoLG = 10;
const int pinoLB = 9;
const int pinoPot = A0;

bool leituraR;
bool leituraG;
bool leituraB;
bool leituraReg;

int brilhoR = 255;
int brilhoG = 255;
int brilhoB = 255;

int leituraPot; 

void setup() {
  pinMode(pinoBR, INPUT_PULLUP);
  pinMode(pinoBG, INPUT_PULLUP);
  pinMode(pinoBB, INPUT_PULLUP);
  pinMode(pinoBReg, INPUT_PULLUP);
  pinMode(pinoLR, OUTPUT);
  pinMode(pinoLG, OUTPUT);
  pinMode(pinoLB, OUTPUT);
  pinMode(pinoPot, INPUT);

}

void loop() {
  leituraR = digitalRead(pinoBR);
  leituraG = digitalRead(pinoBG);
  leituraB = digitalRead(pinoBB);
  leituraReg = digitalRead(pinoBReg);
  leituraPot = analogRead(pinoPot);
  
  if(leituraR == LOW){
    if(leituraReg == LOW){
      brilhoR = map(leituraPot,0,1023,0,255);
      }
      analogWrite(pinoLR, brilhoR);
    }
   else{
    analogWrite(pinoLR, 0);
    }

   if(leituraG == LOW){
    if(leituraReg == LOW){
      brilhoG = map(leituraPot,0,1023,0,255);
      }
      analogWrite(pinoLG, brilhoG);
    }
   else{
    analogWrite(pinoLG, 0);
    }

    if(leituraB == LOW){
    if(leituraReg == LOW){
      brilhoB = map(leituraPot,0,1023,0,255);
      }
      analogWrite(pinoLB, brilhoB);
    }
   else{
    analogWrite(pinoLB, 0);
    }

    delay(100);
}
