const int pwm = 3;
const int pot = A0;
int ValorReal = 0;
int ValorAdap = 0;


void setup() {
 Serial.begin(9600);
 pinMode(pwm, OUTPUT);
 pinMode(pot, INPUT);
}

void loop() {
  ValorReal = analogRead(pot);
  ValorAdap = map(ValorReal,0,1023,0,255);
  analogWrite(pwm, ValorAdap);
  Serial.println(ValorAdap);
  delay(100);
}
