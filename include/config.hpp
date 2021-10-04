#ifndef _CONFIG_HPP
#define _CONFIG_HPP
#include <Arduino.h>
const unsigned char kScreenAddress = 0x3D;
const unsigned long kFrameTime = 60;

const int kDYPPScrollSpeed = 3;
// ./dypp_array_gen 200 27 28
const int kDYPPScrollLimit = 200;
const unsigned char kDYPPScrollArray[200] PROGMEM = {28, 29, 30, 31, 31, 32, 33, 34, 35, 36, 36, 37, 38, 39, 39, 40, 41, 42, 42, 43, 44, 45, 45, 46, 46, 47, 48, 48, 49, 49, 50, 50, 51, 51, 52, 52, 52, 53, 53, 53, 54, 54, 54, 54, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 54, 54, 54, 54, 53, 53, 53, 52, 52, 52, 51, 51, 50, 50, 49, 49, 48, 48, 47, 46, 46, 45, 45, 44, 43, 42, 42, 41, 40, 39, 39, 38, 37, 36, 36, 35, 34, 33, 32, 31, 31, 30, 29, 28, 27, 26, 25, 25, 24, 23, 22, 21, 20, 20, 19, 18, 17, 17, 16, 15, 14, 14, 13, 12, 11, 11, 10, 10, 9, 8, 8, 7, 7, 6, 6, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 10, 10, 11, 11, 12, 13, 14, 14, 15, 16, 17, 17, 18, 19, 20, 20, 21, 22, 23, 24, 25, 25, 26, 27};

const int kBitmapScrollSpeed = 2;
// ./text_array_gen "                        Arduino SSD1306 Sinescroller by xNyaDev - source code: https://github.com/xNyaDev/arduino-ssd1306-sinescroller"
const int kBitmapScrollLimit = 1072;
const unsigned char kBitmapScrollArray[1072] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x7c, 0x7e, 0x0b, 0x0b, 0x7e, 0x7c, 0x00,
    0x00, 0x7c, 0x7c, 0x04, 0x04, 0x0c, 0x08, 0x00,
    0x00, 0x30, 0x78, 0x48, 0x48, 0x7e, 0x7e, 0x00,
    0x00, 0x3c, 0x7c, 0x40, 0x40, 0x7c, 0x7c, 0x00,
    0x00, 0x00, 0x48, 0x7a, 0x7a, 0x40, 0x00, 0x00,
    0x00, 0x7c, 0x7c, 0x04, 0x04, 0x7c, 0x78, 0x00,
    0x00, 0x38, 0x7c, 0x44, 0x44, 0x7c, 0x38, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x26, 0x6f, 0x49, 0x49, 0x7b, 0x32, 0x00,
    0x00, 0x26, 0x6f, 0x49, 0x49, 0x7b, 0x32, 0x00,
    0x00, 0x7f, 0x7f, 0x41, 0x63, 0x3e, 0x1c, 0x00,
    0x00, 0x40, 0x44, 0x7f, 0x7f, 0x40, 0x40, 0x00,
    0x00, 0x22, 0x63, 0x49, 0x49, 0x7f, 0x36, 0x00,
    0x00, 0x3e, 0x7f, 0x49, 0x45, 0x7f, 0x3e, 0x00,
    0x00, 0x3e, 0x7f, 0x49, 0x49, 0x7b, 0x32, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x26, 0x6f, 0x49, 0x49, 0x7b, 0x32, 0x00,
    0x00, 0x00, 0x48, 0x7a, 0x7a, 0x40, 0x00, 0x00,
    0x00, 0x7c, 0x7c, 0x04, 0x04, 0x7c, 0x78, 0x00,
    0x00, 0x38, 0x7c, 0x54, 0x54, 0x5c, 0x18, 0x00,
    0x00, 0x48, 0x5c, 0x54, 0x54, 0x74, 0x24, 0x00,
    0x00, 0x38, 0x7c, 0x44, 0x44, 0x44, 0x00, 0x00,
    0x00, 0x7c, 0x7c, 0x04, 0x04, 0x0c, 0x08, 0x00,
    0x00, 0x38, 0x7c, 0x44, 0x44, 0x7c, 0x38, 0x00,
    0x00, 0x00, 0x42, 0x7e, 0x7e, 0x40, 0x00, 0x00,
    0x00, 0x00, 0x42, 0x7e, 0x7e, 0x40, 0x00, 0x00,
    0x00, 0x38, 0x7c, 0x54, 0x54, 0x5c, 0x18, 0x00,
    0x00, 0x7c, 0x7c, 0x04, 0x04, 0x0c, 0x08, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x7e, 0x7e, 0x48, 0x48, 0x78, 0x30, 0x00,
    0x00, 0x9c, 0xbc, 0xa0, 0xe0, 0x7c, 0x3c, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x44, 0x6c, 0x38, 0x38, 0x6c, 0x44, 0x00,
    0x00, 0x7f, 0x7f, 0x0e, 0x1c, 0x7f, 0x7f, 0x00,
    0x00, 0x9c, 0xbc, 0xa0, 0xe0, 0x7c, 0x3c, 0x00,
    0x00, 0x20, 0x74, 0x54, 0x54, 0x7c, 0x78, 0x00,
    0x00, 0x7f, 0x7f, 0x41, 0x63, 0x3e, 0x1c, 0x00,
    0x00, 0x38, 0x7c, 0x54, 0x54, 0x5c, 0x18, 0x00,
    0x00, 0x1c, 0x3c, 0x60, 0x60, 0x3c, 0x1c, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x48, 0x5c, 0x54, 0x54, 0x74, 0x24, 0x00,
    0x00, 0x38, 0x7c, 0x44, 0x44, 0x7c, 0x38, 0x00,
    0x00, 0x3c, 0x7c, 0x40, 0x40, 0x7c, 0x7c, 0x00,
    0x00, 0x7c, 0x7c, 0x04, 0x04, 0x0c, 0x08, 0x00,
    0x00, 0x38, 0x7c, 0x44, 0x44, 0x44, 0x00, 0x00,
    0x00, 0x38, 0x7c, 0x54, 0x54, 0x5c, 0x18, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x38, 0x7c, 0x44, 0x44, 0x44, 0x00, 0x00,
    0x00, 0x38, 0x7c, 0x44, 0x44, 0x7c, 0x38, 0x00,
    0x00, 0x30, 0x78, 0x48, 0x48, 0x7e, 0x7e, 0x00,
    0x00, 0x38, 0x7c, 0x54, 0x54, 0x5c, 0x18, 0x00,
    0x00, 0x00, 0x00, 0x24, 0x24, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x7e, 0x7e, 0x08, 0x08, 0x78, 0x70, 0x00,
    0x00, 0x04, 0x04, 0x3e, 0x7e, 0x44, 0x44, 0x00,
    0x00, 0x04, 0x04, 0x3e, 0x7e, 0x44, 0x44, 0x00,
    0x00, 0xfc, 0xfc, 0x24, 0x24, 0x3c, 0x18, 0x00,
    0x00, 0x48, 0x5c, 0x54, 0x54, 0x74, 0x24, 0x00,
    0x00, 0x00, 0x00, 0x24, 0x24, 0x00, 0x00, 0x00,
    0x00, 0x40, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x02,
    0x00, 0x40, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x02,
    0x00, 0x98, 0xbc, 0xa4, 0xa4, 0xfc, 0x7c, 0x00,
    0x00, 0x00, 0x48, 0x7a, 0x7a, 0x40, 0x00, 0x00,
    0x00, 0x04, 0x04, 0x3e, 0x7e, 0x44, 0x44, 0x00,
    0x00, 0x7e, 0x7e, 0x08, 0x08, 0x78, 0x70, 0x00,
    0x00, 0x3c, 0x7c, 0x40, 0x40, 0x7c, 0x7c, 0x00,
    0x00, 0x7e, 0x7e, 0x48, 0x48, 0x78, 0x30, 0x00,
    0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00,
    0x00, 0x38, 0x7c, 0x44, 0x44, 0x44, 0x00, 0x00,
    0x00, 0x38, 0x7c, 0x44, 0x44, 0x7c, 0x38, 0x00,
    0x00, 0x7c, 0x7c, 0x18, 0x38, 0x1c, 0x7c, 0x78,
    0x00, 0x40, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x02,
    0x00, 0x44, 0x6c, 0x38, 0x38, 0x6c, 0x44, 0x00,
    0x00, 0x7f, 0x7f, 0x0e, 0x1c, 0x7f, 0x7f, 0x00,
    0x00, 0x9c, 0xbc, 0xa0, 0xe0, 0x7c, 0x3c, 0x00,
    0x00, 0x20, 0x74, 0x54, 0x54, 0x7c, 0x78, 0x00,
    0x00, 0x7f, 0x7f, 0x41, 0x63, 0x3e, 0x1c, 0x00,
    0x00, 0x38, 0x7c, 0x54, 0x54, 0x5c, 0x18, 0x00,
    0x00, 0x1c, 0x3c, 0x60, 0x60, 0x3c, 0x1c, 0x00,
    0x00, 0x40, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x02,
    0x00, 0x20, 0x74, 0x54, 0x54, 0x7c, 0x78, 0x00,
    0x00, 0x7c, 0x7c, 0x04, 0x04, 0x0c, 0x08, 0x00,
    0x00, 0x30, 0x78, 0x48, 0x48, 0x7e, 0x7e, 0x00,
    0x00, 0x3c, 0x7c, 0x40, 0x40, 0x7c, 0x7c, 0x00,
    0x00, 0x00, 0x48, 0x7a, 0x7a, 0x40, 0x00, 0x00,
    0x00, 0x7c, 0x7c, 0x04, 0x04, 0x7c, 0x78, 0x00,
    0x00, 0x38, 0x7c, 0x44, 0x44, 0x7c, 0x38, 0x00,
    0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00,
    0x00, 0x48, 0x5c, 0x54, 0x54, 0x74, 0x24, 0x00,
    0x00, 0x48, 0x5c, 0x54, 0x54, 0x74, 0x24, 0x00,
    0x00, 0x30, 0x78, 0x48, 0x48, 0x7e, 0x7e, 0x00,
    0x00, 0x40, 0x44, 0x7f, 0x7f, 0x40, 0x40, 0x00,
    0x00, 0x22, 0x63, 0x49, 0x49, 0x7f, 0x36, 0x00,
    0x00, 0x3e, 0x7f, 0x49, 0x45, 0x7f, 0x3e, 0x00,
    0x00, 0x3e, 0x7f, 0x49, 0x49, 0x7b, 0x32, 0x00,
    0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00,
    0x00, 0x48, 0x5c, 0x54, 0x54, 0x74, 0x24, 0x00,
    0x00, 0x00, 0x48, 0x7a, 0x7a, 0x40, 0x00, 0x00,
    0x00, 0x7c, 0x7c, 0x04, 0x04, 0x7c, 0x78, 0x00,
    0x00, 0x38, 0x7c, 0x54, 0x54, 0x5c, 0x18, 0x00,
    0x00, 0x48, 0x5c, 0x54, 0x54, 0x74, 0x24, 0x00,
    0x00, 0x38, 0x7c, 0x44, 0x44, 0x44, 0x00, 0x00,
    0x00, 0x7c, 0x7c, 0x04, 0x04, 0x0c, 0x08, 0x00,
    0x00, 0x38, 0x7c, 0x44, 0x44, 0x7c, 0x38, 0x00,
    0x00, 0x00, 0x42, 0x7e, 0x7e, 0x40, 0x00, 0x00,
    0x00, 0x00, 0x42, 0x7e, 0x7e, 0x40, 0x00, 0x00,
    0x00, 0x38, 0x7c, 0x54, 0x54, 0x5c, 0x18, 0x00,
    0x00, 0x7c, 0x7c, 0x04, 0x04, 0x0c, 0x08, 0x00};
#endif