#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include "config.hpp"

const int8_t kScreenWidth = 128;
const int8_t kScreenHeight = 64;
const int8_t kOledResetPin = 4;

Adafruit_SSD1306 display(kScreenWidth, kScreenHeight, &Wire, kOledResetPin);

void drawVerticalBitmap(int16_t, int16_t, uint8_t);

int dypp_scroll_position;
int bitmap_scroll_position;
unsigned long previous_millis = 0;

void setup()
{
    if (!display.begin(SSD1306_SWITCHCAPVCC, kScreenAddress))
    {
        do
        {
        } while (true);
    }
}

void loop()
{
    unsigned long current_millis = millis();
    if (current_millis - previous_millis >= kFrameTime)
    {
        previous_millis = current_millis;
        dypp_scroll_position += kDYPPScrollLimit - kDYPPScrollSpeed;
        dypp_scroll_position %= kDYPPScrollLimit;
        bitmap_scroll_position += kBitmapScrollSpeed;
        bitmap_scroll_position %= kBitmapScrollLimit;
        display.clearDisplay();
        for (int i = 0; i < 128; i++)
        {
            drawVerticalBitmap(i, pgm_read_byte(kDYPPScrollArray + ((i + dypp_scroll_position) % kDYPPScrollLimit)), pgm_read_byte(kBitmapScrollArray + ((i + bitmap_scroll_position) % kBitmapScrollLimit)));
        }
        display.display();
    }
}

void drawVerticalBitmap(int16_t x, int16_t y, uint8_t bitmap)
{
    display.startWrite();
    for (uint8_t i = 0; i < 8; i++)
    {
        display.writePixel(x, y + i, !!(bitmap & (1 << i)));
    }
    display.endWrite();
}