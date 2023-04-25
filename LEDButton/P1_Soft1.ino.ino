void setup() {
  pinMode(2,INPUT);   //pin 2 como entrada
  pinMode(3,OUTPUT);  //pin 3 como salida
}
void loop() {
  if(digitalRead(2) == HIGH){ //se evalua si la entrada esta a nivel alto
    digitalWrite(3,HIGH) ;     //pin3 a nivel alto(1) LED encendido 
  }else{
    digitalWrite(3,LOW);     // pin3 a nivel alto y apagamos el led 
  }
}
