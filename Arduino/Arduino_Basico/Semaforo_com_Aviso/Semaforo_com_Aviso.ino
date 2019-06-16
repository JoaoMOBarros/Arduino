void setup(){
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
}

void loop(){
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  delay(1500);
  
  // Sinal fechado: apaga LED verde, acende LED amarelo
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(1000);
  
  // Sinal fechado: apaga LED amarelo, acende LED vermelho
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(3000);

  digitalWrite(9,HIGH);
  delay(120);
  digitalWrite(9,LOW);
  delay(120);
  digitalWrite(9,HIGH);
  delay(120);
  digitalWrite(9,LOW);
  delay(120);
  digitalWrite(9,HIGH);
  delay(120);
  digitalWrite(9,LOW);
  delay(120);
  digitalWrite(9,HIGH);
  delay(120);
  digitalWrite(9,LOW);
  delay(120);
  digitalWrite(9,HIGH);
  delay(120);
  digitalWrite(9,LOW);
  delay(120);
  digitalWrite(9,HIGH);
  delay(120);
  digitalWrite(9,LOW);
  
}
