int LEDR = 9;
int LEDG = 10;
int LEDB = 11;
int Ba;
int Bb;
int Bc;
int POT1 = A1;
int POT2 = A2;
int POT3 = A3;
void setup() {
  pinMode(LEDR,OUTPUT);
  pinMode(LEDG,OUTPUT);
  pinMode(LEDB,OUTPUT);
}

void loop() {
  //potenciador 1(RED)
  Ba = analogRead(POT1)/4;
  analogWrite(LEDR,255-Ba);
  //potenciador 2(GREEN)
  Bb = analogRead(POT2)/4;
  analogWrite(LEDG,255-Bb);
  //potenciador 3(RED)
  Bc = analogRead(POT3)/4;
  analogWrite(LEDB,255-Bc);
}