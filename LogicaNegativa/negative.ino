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
	miColor(255,255,0);
	delay(2000);

	miColor(0,255,0);
	delay(2000);

	miColor(0,0,255);
	delay(2000);
}

void miColor(int rojo, int verde, int azul){

	analogWrite(LED_ROJO, rojo);
	analogWrite(LED_VERDE, verde);
	analogWrite(LED_AZUL, azul);

}