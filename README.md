# arduino WS2812B LED Example

This little project was create to animate make my 3dprint "THE RING" from https://makerworld.com/en/models/533264

Electrical setup is very simple, you need:
 - arduino ( any type ) with 1 digital PIN.
 - Power source: Mean Well IRM-30-5ST which is 5V/6A , but you can use any similian power source with proper AMP rating. You power depends on how many LEDs you want to animate. For example one LED can use up to 60ma, so 39 LEDS ( in my case ) can use up to 2.3 Amps
 - some 330 to 440 ohm resistor beterrn Digital PIN and Digital Control of LED strip. ( I used 2 x 220 ohm connected in line )
 - 1000mF / 16v capacitor 


We use Adafruit Neopixel Library, I found some really good example here:
https://newbiely.com/tutorials/arduino-nano-esp32/arduino-nano-esp32-ws2812b-led-strip

Electrical wiring diagram here: 

 ![arduino-WS2812B-LEDs-wiring](https://github.com/user-attachments/assets/467cc26c-e872-4c29-bdbe-5deedd8cdc02)

And here is the final product: 

![20241222_023329](https://github.com/user-attachments/assets/1d8a4a03-72fd-4e91-849e-dfe972384406)
![20241222_120224](https://github.com/user-attachments/assets/d7779fa4-7183-4f6b-9e45-e5fb9a4e36d0)
![20241222_023344](https://github.com/user-attachments/assets/da22d3b8-d704-4001-8f6a-9d0b7d8d9779)
![20241222_120339](https://github.com/user-attachments/assets/3e1437ce-0964-4767-8f0c-1eaf5c44cbfa)
![20241222_120335](https://github.com/user-attachments/assets/6b3d3ee3-fa53-4a5d-986f-02bc69869fb6)
![20241222_120346](https://github.com/user-attachments/assets/25b79bac-973e-4c4c-84ca-441935dba0da)


Animation Example on video here: 

https://www.youtube.com/shorts/Kw89tR09EOI
