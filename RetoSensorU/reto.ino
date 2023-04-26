int TRIG = 10;
int ECO = 9;
int ROJO = 3;
int VERDE = 5;
int AZUL = 6;
int DURACION;
int DISTANCIA;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECO, INPUT);
  pinMode(ROJO, OUTPUT);
  pinMode(AZUL, OUTPUT);
  pinMode(VERDE, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG, HIGH);
  delay(1);
  digitalWrite(TRIG, LOW);

  DURACION = pulseIn(ECO, HIGH);
  DISTANCIA = DURACION / 58;

  Serial.print(DISTANCIA);
  Serial.print(" ");
  delay(1000);
  
  if(DISTANCIA <= 50 && DISTANCIA >= 0) {
    digitalWrite(ROJO, HIGH);
    Serial.println("rojo");
    delay(DISTANCIA * 7);
    digitalWrite(ROJO, LOW);
  } else if(DISTANCIA >= 51 && DISTANCIA <= 100) {
    digitalWrite(AZUL, HIGH);
    Serial.println("azul");
    delay(DISTANCIA * 7);
    digitalWrite(AZUL, LOW);
  } else {
    digitalWrite(VERDE, HIGH);
    Serial.println("verde");
    delay(DISTANCIA * 7);
    digitalWrite(VERDE, LOW);
  }
}
