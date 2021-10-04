# Arduino SSD1306 Sinescroller
A configurable DYPP (Different Y Pixel Position) retro sinescroller for SSD1306 displays. Using a modified Commodore 64 character set by default, but supports any 8px tall bitmap.

## Demo

Live version: https://wokwi.com/arduino/projects/311546132461257280

Screenshot: 
[![Sinescroller Screenshot](https://i.imgur.com/SzJy7JI.png "Sinescroller Screenshot")](https://i.imgur.com/SzJy7JI.png "Sinescroller Screenshot")

## Setting up
All you need to edit is contained in the `include/config.hpp` file. It is recommended to use the tools provided in `tools` to modify the sine wave and bitmap (both are regular C++ programs) and leave the other values at their defaults.

Depending on your display, you may need to change the screen address `kScreenAddress` in `include/config.hpp` - use the I2CScanner sketch to check for the correct address (You can get it for example on [Adafruit](https://learn.adafruit.com/scanning-i2c-addresses/arduino), it's also built-in to the default Arduino IDE). 

If you're using anything different than a 128x64 I2C display, change the Adafruit_SSD1306 display constructor in `src/main.cpp` to reflect that.

## Flashing with PlatformIO
1. Select the appropriate board and upload.

## Flashing with Arduino IDE
1. Install necessary libraries from the library manager - Adafruit SSD1306 and Adafruit GFX

2. Copy contents of the `src/main.cpp` file to your sketch .ino file and place `include/config.hpp` next to the .ino file.

3. Select the appropriate board and upload.

## License
[MIT](https://choosealicense.com/licenses/mit/)