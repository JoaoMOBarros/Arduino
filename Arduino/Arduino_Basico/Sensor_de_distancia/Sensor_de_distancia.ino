const int ECHO = 2;
const int TRIG = 3;

int distanciaObstaculo = 20;

void setup() {
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() {
  int distancia = medirDistancia(TRIG, ECHO);
  if(distancia <= distanciaObstaculo){
    Serial.print("Com obstaculo: ");
    Serial.print(distancia);
    Serial.println(" cm");
    }
   else{
    Serial.print("Sem obstaculo: ");
    Serial.print(distancia);
    Serial.println(" cm");
    }
    delay(1000);
}

int medirDistancia(int TRIG, int ECHO){
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  return pulseIn(ECHO, HIGH)/58;
  }
