//este programa sube la intensidad de luz con un potenciometro
int LED = 3;
int BRILLO;
int POT = A0;
void setup() {
  pinMode(LED,OUTPUT);
}

void loop() {
  BRILLO = analogRead(POT)/4;
  analogWrite(LED,BRILLO);
}