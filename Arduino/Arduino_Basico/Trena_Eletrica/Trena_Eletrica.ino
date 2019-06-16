const int ECHO = 2;
const int TRIG = 3;

const int p_verm = 4;
const int p_ama = 5;
const int p_verd = 6;
const int p_bra = 7;

const int pino_a = 13;
const int pino_b = 12;
const int pino_c = 11;
const int pino_d = 10;



void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(p_verm,OUTPUT);
  pinMode(p_ama,OUTPUT);
  pinMode(p_verd,OUTPUT);
  pinMode(p_bra,OUTPUT);
  pinMode(pino_a,OUTPUT);
  pinMode(pino_b,OUTPUT);
  pinMode(pino_c,OUTPUT);
  pinMode(pino_d,OUTPUT);
}

void loop() {
  int distancia = medirDistancia(TRIG, ECHO);
  if(distancia/40 >= 1){
    digitalWrite(p_verm, HIGH);
    digitalWrite(p_ama, LOW);
    digitalWrite(p_verd, LOW);
    digitalWrite(p_bra, LOW);

    int resto = distancia%40;
    unidade(resto);
    }
    
  else if(distancia/30 >= 1){
    digitalWrite(p_verm, LOW);
    digitalWrite(p_ama, HIGH);
    digitalWrite(p_verd, LOW);
    digitalWrite(p_bra, LOW);

    int resto = distancia%30;
    unidade(resto);
    }

   else if(distancia/20 >= 1){
    digitalWrite(p_verm, LOW);
    digitalWrite(p_ama, LOW);
    digitalWrite(p_verd, HIGH);
    digitalWrite(p_bra, LOW);

    int resto = distancia%20;
    unidade(resto);
    }
    
    else{
    digitalWrite(p_verm, LOW);
    digitalWrite(p_ama, LOW);
    digitalWrite(p_verd, LOW);
    digitalWrite(p_bra, HIGH);

    int resto = distancia%10;
    unidade(resto);
    }

    delay(500);
    
}

int medirDistancia(int TRIG, int ECHO){
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  return pulseIn(ECHO, HIGH)/58;
  }


void unidade(int resto){
  
  switch(resto){

  case 1:
        digitalWrite(pino_a, HIGH);
        digitalWrite(pino_b, LOW);
        digitalWrite(pino_c, LOW);
        digitalWrite(pino_d, LOW);
       break;

       case 2:
        digitalWrite(pino_a, LOW);
        digitalWrite(pino_b, HIGH);
        digitalWrite(pino_c, LOW);
        digitalWrite(pino_d, LOW);
       break;
       
       case 3:
        digitalWrite(pino_a, HIGH);
        digitalWrite(pino_b, HIGH);
        digitalWrite(pino_c, LOW);
        digitalWrite(pino_d, LOW);
       break;
       
       case 4:
        digitalWrite(pino_a, LOW);
        digitalWrite(pino_b, LOW);
        digitalWrite(pino_c, HIGH);
        digitalWrite(pino_d, LOW);
       break;

       case 5:
        digitalWrite(pino_a, HIGH);
        digitalWrite(pino_b, LOW);
        digitalWrite(pino_c, HIGH);
        digitalWrite(pino_d, LOW);
       break;

       case 6:
        digitalWrite(pino_a, HIGH);
        digitalWrite(pino_b, HIGH);
        digitalWrite(pino_c, HIGH);
        digitalWrite(pino_d, LOW);
       break;


      case 7:
        digitalWrite(pino_a, HIGH);
        digitalWrite(pino_b, HIGH);
        digitalWrite(pino_c, HIGH);
        digitalWrite(pino_d, LOW);
       break;


      case 8:
        digitalWrite(pino_a, LOW);
        digitalWrite(pino_b, LOW);
        digitalWrite(pino_c, LOW);
        digitalWrite(pino_d, HIGH);
       break;

       case 9:
        digitalWrite(pino_a, HIGH);
        digitalWrite(pino_b, LOW);
        digitalWrite(pino_c, LOW);
        digitalWrite(pino_d, HIGH);
       break;

  }
  }
