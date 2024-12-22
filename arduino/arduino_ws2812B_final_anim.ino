/*
ws2812b animation example for THE RING 
https://makerworld.com/en/models/533264

Some nice howto can be found on this link: 
https://newbiely.com/tutorials/arduino-nano-esp32/arduino-nano-esp32-ws2812b-led-strip

It is for nano esp32 - but it is same for Arduino R3 or R4
*/

#include <Adafruit_NeoPixel.h>

#define PIN_WS2812B 2  // The Arduino pin connected to WS2812B
#define NUM_PIXELS 39   // The number of LEDs (pixels) on WS2812B LED strip
#define PULSE 100 // Speed of round LEF cycle in miliseconds
#define COL_START 80 // initial LED brightnes ( from 0 to 255 )

Adafruit_NeoPixel ws2812b(NUM_PIXELS, PIN_WS2812B, NEO_GRB + NEO_KHZ800);

void setup() {
  ws2812b.begin();  // initialize WS2812B strip object (REQUIRED)
}

void loop() {
  ws2812b.clear();  // set all pixel colors to 'off'. It only takes effect if pixels.show() is called



  // task0 - LEDS on 1 by 1
  for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {
    ws2812b.setPixelColor(pixel, ws2812b.Color(COL_START,COL_START,COL_START));
    ws2812b.show();
    delay(PULSE);
  }

  // task1 - brightness to max
  for (int colour2 = 95; colour2 < 256; colour2 = colour2 + 16){

    for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {
      ws2812b.setPixelColor(pixel, ws2812b.Color(colour2,colour2,colour2));
      ws2812b.show();
    }
    
    delay(PULSE);
  }


  // task2 - brightness to minimal
  for (int colour2 = 239; colour2 > 16; colour2 = colour2 - 16) {

    for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {
      ws2812b.setPixelColor(pixel, ws2812b.Color(colour2,colour2,colour2));
      ws2812b.show();
       
    }

    delay(PULSE);
  }

  // task3 - brightness to max
  for (int colour2 = 16; colour2 < 256; colour2 = colour2 + 16){

    for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {
      ws2812b.setPixelColor(pixel, ws2812b.Color(colour2,colour2,colour2));
      ws2812b.show();
    }

    delay(PULSE);
  }

  // task4 - brightness to minimal
  for (int colour2 = 239; colour2 > 16; colour2 = colour2 - 16){

    for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {
      ws2812b.setPixelColor(pixel, ws2812b.Color(colour2,colour2,colour2));
      ws2812b.show();
    }
    
    delay(PULSE);
  }


  // task5 - brightness to max
  for (int colour2 = 16; colour2 < 256; colour2 = colour2 + 16){

    for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {
      ws2812b.setPixelColor(pixel, ws2812b.Color(colour2,colour2,colour2));
      ws2812b.show();
    }
    
    delay(PULSE);
  }

  // task6 - brightness to minimal
  for (int colour2 = 239; colour2 > 16; colour2 = colour2 - 16){

    for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {
      ws2812b.setPixelColor(pixel, ws2812b.Color(colour2,colour2,colour2));
      ws2812b.show();
        
    }
    
    delay(PULSE);
  }

  // task7 - LEDS off 1 by 1
  for (int pixel = 39; pixel > 0; pixel--) {
    ws2812b.setPixelColor(pixel, ws2812b.Color(0,0,0));
    ws2812b.show();
    delay(PULSE);
  }

  // now wait 3 sec and start over
  delay(3000);
}
