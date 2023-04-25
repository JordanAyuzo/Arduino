//ejercicio del relevador
int RELE = 2;
void setup() {
    pinMode(RELE,OUTPUT);
}

void loop() {
  digitalWrite(RELE, LOW);
  delay(500);
  digitalWrite(RELE, HIGH);
  delay(500);
}
