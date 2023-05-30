#include <PL9823.h>

void RED(){
    #define NUM_LEDS 1
    #define STRING1_PIN 22
    CRGBArray<NUM_LEDS> leds; 

    FastLED.addLeds<WS2812, STRING1_PIN,RGB>(leds, NUM_LEDS); 
    FastLED.setBrightness(255);

    fill_solid(leds, NUM_LEDS , CRGB::Red);
    FastLED.show();  

    digitalWrite(buzzer, HIGH);  
}

void OFF(){
    #define NUM_LEDS 1
    #define STRING1_PIN 22
    CRGBArray<NUM_LEDS> leds; 

    FastLED.addLeds<WS2812, STRING1_PIN,RGB>(leds, NUM_LEDS); 
    FastLED.setBrightness(255);

    fill_solid(leds, NUM_LEDS , CRGB::Black);
    FastLED.show();

    digitalWrite(buzzer, LOW);    
}