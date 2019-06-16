int const VX = A4; 
int const VY = A5;
int const Click = 2;

void setup() {
  Serial.begin(9600);
  pinMode(VX, INPUT);
  pinMode(VY, INPUT);
  pinMode(Click, INPUT_PULLUP);
}

void loop() {
  int r_vx = analogRead(VX);
  int r_vy = analogRead(VY);
  int r_ck = digitalRead(Click);

  Serial.print("Info from VX: ");
  Serial.print(r_vx);
  Serial.print("\t");
  Serial.print("Info from VY: ");
  Serial.print(r_vy);
  Serial.print("\t");
  Serial.print("Info from Click: ");
  Serial.println(r_ck*100);

}
