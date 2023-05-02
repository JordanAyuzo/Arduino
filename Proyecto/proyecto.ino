
#include <SPI.h>
#include <Wire.h>
#include <RTClib.h> 
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64 
#define NUMFLAKES     10 // Number of snowflakes in the animation example
#define LOGO_HEIGHT   16
#define LOGO_WIDTH    16
#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)
#define OPTIONS        4
int PULSADOR = 2;
int ESTADO = 0; 
int screen = 1;
RTC_DS1307 RTC;
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


void setup() {
  Serial.begin(9600);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3D)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }
  pinMode(PULSADOR,INPUT);  
  RTC.begin();
  display.display();
  delay(2000); 
  display.clearDisplay();
  display.invertDisplay(true);
  delay(1000);
  display.invertDisplay(false);
}

void loop() {
  switch (screen) {
  case 1:
    home();
    break;
  case 2:
    cronometro();
    break;
  case 3:
    prueba("pantalla 3");
    break;
  case 4:
    prueba("pantalla 4");
    break;
  default:
    prueba("pantalla Error");
    screen = 1;
    break;
}
  if(digitalRead(PULSADOR)==HIGH && ESTADO == 0){
    ESTADO = 1;
    if(screen <OPTIONS){
      screen=screen+1;
    }else{
      screen=0;
    }
  }
  if(digitalRead(PULSADOR)==LOW && ESTADO == 1){
    ESTADO = 0;
    if(screen <OPTIONS){
      screen=screen+1;
    }else{
      screen=0;
    }
  }
}


void prueba(String numpant){
  display.clearDisplay();
  printi(1,0,0,numpant);
  delay(1000);
}

void home(){
  DateTime now=RTC.now();
  String fecha ="Fecha:"+String(now.day())+"/"+String(now.month())+"/"+String(now.year())+".";
  String hora = "Hora:"+String(now.hour())+":"+String(now.minute())+":"+String(now.second())+".";
  display.clearDisplay();
  printi(1,20,0,"Home");
  printi(1,1,10,fecha);
  printi(1,1,20,hora);
  delay(1000);
}

void cronometro(){
  //aqui escriben codigo
}
void printi(int size,int x, int y,String text){
  display.setTextSize(size);             // Normal 1:1 pixel scale
  display.setTextColor(SSD1306_WHITE);        // Draw white text
  display.setCursor(x,y);             // Start at top-left corner
  display.println((text));
  display.display();
}
