#include <Wire.h>
#include <SPI.h>
#include <Adafruit_BMP280.h>
#include <DHT.h>
#include <DHT_U.h>
#define BMP_SCK  (13)
#define BMP_MISO (12)
#define BMP_MOSI (11)
#define BMP_CS   (10)
  int SENSOR =2;
  DHT dht (SENSOR, DHT11);
Adafruit_BMP280 bmp; // I2C
void setup() {
  Serial.begin(9600);
  dht.begin();
  if (!bmp.begin()) {
    Serial.println(F("No Está conectado bien o se quemó jajajaja!"));
    while (1);
  }
  bmp.setSampling(Adafruit_BMP280::MODE_NORMAL,     /* Operating Mode. */
                  Adafruit_BMP280::SAMPLING_X2,     /* Temp. oversampling */
                  Adafruit_BMP280::SAMPLING_X16,    /* Pressure oversampling */
                  Adafruit_BMP280::FILTER_X16,      /* Filtering. */
                  Adafruit_BMP280::STANDBY_MS_500); /* Standby time. */
}
void loop() {
  //Serial.println("===============================");
    Serial.print(F("Temperatura(Barómetro) = "));
    Serial.print(bmp.readTemperature());
    Serial.println(" *C");

    Serial.print(F("Temperatura(Sensor) = "));
    Serial.print(dht.readTemperature());
    Serial.println(" *C");

    Serial.print(F("Presión (Barómetro)= "));
    Serial.print(bmp.readPressure());
    Serial.println(" Pa");
    //ver si esto funciona tambien si no borrar

    Serial.print(F("Altitud Aproximada(Barómetro) = "));
    Serial.print(bmp.readAltitude(1013.25)); /* Adjusted to local forecast! */
    Serial.println(" m");

    Serial.print(F("Humedad(Sensor) = "));
    Serial.print(int(dht.readHumidity())); /* Adjusted to local forecast! */
    Serial.println("%");
    Serial.println("===============================");
    Serial.println("");
    Serial.println("");


    delay(6000);
}
