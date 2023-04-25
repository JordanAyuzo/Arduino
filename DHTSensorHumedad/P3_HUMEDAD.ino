#include <DHT.h>
#include <DHT_U.h>
  int SENSOR =2;
  int TEMPERATURA;
  int HUMEDAD;
  DHT dht (SENSOR, DHT11);
void setup() {
  Serial.begin(9600);
  dht.begin();
}
void loop() {
  TEMPERATURA= dht.readTemperature();
  HUMEDAD = dht.readHumidity();
  Serial.print("temperatura: ");
  Serial.print(TEMPERATURA);

  Serial.print("   Humedad: ");
  Serial.print(HUMEDAD);
Serial.print("\n");
  delay(1000);

}
