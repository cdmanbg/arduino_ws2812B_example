# arduino WS2812B LED Example

This little project was create to animate make my 3dprint "THE RING" from https://makerworld.com/en/models/533264

Electrical setup is very simple, you need:
 - arduino ( any type ) with 1 digital PIN.
 - Power source: Mean Well IRM-30-5ST which is 5V/6A , but you can use any similian power source with proper AMP rating. You power depends on how many LEDs you want to animate. For example one LED can use up to 60ma, so 39 LEDS ( in my case ) can use up to 2.3 Amps
 - some 330 to 440 ohm resistor beterrn Digital PIN and Digital Control of LED strip. ( I used 2 x 220 ohm connected in line )
 - 1000mF / 16v capacitor 


We use Adafruit Neopixel Library, I found some really good example here:
https://newbiely.com/tutorials/arduino-nano-esp32/arduino-nano-esp32-ws2812b-led-strip
 

You can find my animation example video here: https://youtube.com/shorts/Kw89tR09EOI?feature=share
