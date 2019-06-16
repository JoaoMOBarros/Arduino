const int pinoPot = A0;
int leitura = 0;
float tensao = 0.0;


void setup() {
  Serial.begin(9600);
  pinMode(pinoPot, INPUT);
}

void loop() {
  leitura = analogRead(pinoPot);
  tensao = leitura*5.0/1023.0;
  Serial.print(tensao);
  Serial.print(" ");
  Serial.println(tensao*2);

  delay(100);

}
