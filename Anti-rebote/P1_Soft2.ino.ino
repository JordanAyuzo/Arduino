// esta rutina qquita el problema del rebote en los pines de entrada 
int PULSADOR = 2;
int LED = 3;
int ESTADO = LOW;
void setup() {
  pinMode(PULSADOR,INPUT);  // pin de entrada 2
  pinMode(LED,OUTPUT);     //pin de salida 3
}
void loop() {
  // se espera presionar el pushButton cuando esto pasa se sale del siguiente while
  while(digitalRead(PULSADOR)== LOW){
  } 
  ESTADO = digitalRead(LED); //lee el estado encedido o apagado del led
  digitalWrite(LED,!ESTADO);//cambia el estado del led 
  //delay(100); //el retraso es para el software 3
  //instruccion antirebote cuando se deja presionar el boton se sale del while 
  while(digitalRead(PULSADOR)==HIGH){    
  }
}
