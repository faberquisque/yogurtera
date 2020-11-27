// Demo_pixels_texto.ino
// Los pines de I2C para la pantalla oled, están definidos en
// las librerías de Adafruit_SSD1306.h D1=>GPIO5 y D2 =>GPIO4
//
// código libre.
 
#include "Wire.h"
#include "Adafruit_SSD1306.h"
#include "Adafruit_GFX.h"
 
// Pantalla OLED con dirección TWI
#define OLED_ADDR 0x3C
 
Adafruit_SSD1306 display(-1); // -1 = no reset pin
 
void setup () {
// inicializa y borra la pantalla
display.begin (SSD1306_SWITCHCAPVCC, OLED_ADDR);
display.clearDisplay ();
display.display ();
 

}
 
void loop () {
// ponga su código principal aquí, para ejecutar repetidamente:
 // muestra un pixel en cada esquina de la pantalla
display.drawPixel (0, 0, WHITE);
display.drawPixel (127, 0, WHITE);
display.drawPixel (0, 63, WHITE);
display.drawPixel (127, 63, WHITE);
 
// muestra una línea de texto
display.setTextSize (2);
display.setTextColor (WHITE);
display.setCursor (1,30);
display.print ("Hola mundo");
 
// actualiza la pantalla con todos los gráficos anteriores
display.display ();
}
