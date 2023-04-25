#include <Adafruit_BMP280.h>

void setup() {
  Serial.begin(9600);
  if(!serial.begin()){
    Serial.println("no se encontro nada. Todo chiquito todo panzon");
    while(1){}
  }
}

void loop() {
  Serial.print();
  Serial.print();
  Serial.print();

  Serial.print("Temperatura = ");
  Serial.print(bpm.readTemperature());
  Serial.println("*C");

  Serial.print("Presion = ");
  Serial.print(bpm.readPresure());
  Serial.println("Pa");



  Serial.print();
  delay(500)

}
