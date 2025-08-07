# Sequential-Arduino-LED

A simple Arduino Uno project that drives six LEDs in a sequential, back-and-forth pattern. 
Shows GPIO control, state machines, and modular code structure, with room to extend via speed control or additional modes.

Features
- Sequential lighting patterns  
- Clean `light(pin)` method for easy reuse  
- Easily adjustable speed via `ledDelay` constant  

Hardware
- Arduino Uno  
- 6 White LEDs & 6 resistors  
- Breadboard & jumper wires  

Usage
- Clone this repo and open `sequentialLED.ino` in the Arduino IDE  
- Wire LEDs to pins 3-11 (or update `ledPins[]` to match wiring)  
- Upload and watch
