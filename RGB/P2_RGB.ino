int LED_ROJO = 9;
int LED_VERDE = 10;
int LED_AZUL = 11;
int BRILLO;
int POT = A0;

void setup(){
	pinMode(LED_ROJO, OUTPUT);
	pinMode(LED_VERDE, OUTPUT);
	pinMode(LED_AZUL, OUTPUT);
}

void loop(){
	analogWrite(LED_ROJO, 255);
	analogWrite(LED_VERDE, 0);
	analogWrite(LED_AZUL, 0);
	delay(2000);

	analogWrite(LED_ROJO, 0);
	analogWrite(LED_VERDE, 255);
	analogWrite(LED_AZUL, 0);
	delay(2000);

	analogWrite(LED_ROJO, 0);
	analogWrite(LED_VERDE, 0);
	analogWrite(LED_AZUL, 255);
	delay(2000);
}