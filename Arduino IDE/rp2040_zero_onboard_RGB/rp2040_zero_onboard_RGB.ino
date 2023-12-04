#include <FastLED.h>
#define LEDPIN 16 
#define NUMOFLEDS 1 

CRGB leds[NUMOFLEDS]; 

void setup() { 
  FastLED.addLeds<WS2812, LEDPIN, GRB>(leds, NUMOFLEDS); 
}

void loop() {
  leds[0] = CRGB ( 255, 0, 0);
  FastLED.show();
  delay(500);

  leds[0] = CRGB ( 0, 255, 0);
  FastLED.show();
  delay(500);
    
  leds[0] = CRGB ( 0, 0, 255);
  FastLED.show();
  delay(500);

}

