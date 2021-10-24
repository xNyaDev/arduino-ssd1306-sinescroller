// MIT License
//
// Copyright (c) 2021 xNyaDev
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include "config.hpp"

Adafruit_SSD1306 display(kScreenWidth, kScreenHeight, &Wire, kScreenResetPin);

void drawVerticalBitmap(int16_t, int16_t, uint8_t); // Custom function for drawing vertical bitmaps.

int dypp_scroll_offset;            // The current scroll offset of the DYPP array.
int bitmap_scroll_offset;          // The current scroll offset of the bitmap array.
unsigned long previous_millis = 0; // Timestamp of the last frame.

void setup()
{
    if (!display.begin(SSD1306_SWITCHCAPVCC, kScreenAddress)) // If the screen has failed initialization, loop infinitely while blinking the built-in LED rapidly.
    {
        pinMode(LED_BUILTIN, OUTPUT);
        while (true)
        {
            digitalWrite(LED_BUILTIN, HIGH);
            delay(100);
            digitalWrite(LED_BUILTIN, LOW);
            delay(100);
        }
    }
}

void loop()
{
    unsigned long current_millis = millis();
    if (current_millis - previous_millis >= kFrameTime) // If kFrameTime milliseconds passed from the last frame, it is time to draw the next frame.
    {
        previous_millis = current_millis; // Save the previous time at which a frame was drawn.

        dypp_scroll_offset += kDYPPScrollLimit - kDYPPScrollSpeed; // Scroll the DYPP array by -kDYPPScrollSpeed.
        dypp_scroll_offset %= kDYPPScrollLimit;
        bitmap_scroll_offset += kBitmapScrollSpeed; // Scroll the bitmap array by +kBitmapScrollSpeed.
        bitmap_scroll_offset %= kBitmapScrollLimit;
        display.clearDisplay(); // Clear the display and draw all of the bitmaps.
        for (int i = 0; i < 128; i++)
        {
            drawVerticalBitmap(
                i,
                pgm_read_byte(kDYPPScrollArray + ((i + dypp_scroll_offset) % kDYPPScrollLimit)),        // Read the Y position from kDYPPScrollArray scrolled by dypp_scroll_offset.
                pgm_read_byte(kBitmapScrollArray + ((i + bitmap_scroll_offset) % kBitmapScrollLimit))); // Read the bitmap from kBitmapScrollArray scrolled by bitmap_scroll_offset.
        }
        display.display();
    }
}

// The stock Adafruit drawBitmap function draws the passed bitmap horizontally and requires one byte per one vertical pixel.
// This either makes the storage requirements for the bitmap to be multiplied by 8 or requires a wrapper around the function which gives it a modified bitmap.
// Instead of that, I've created a function that draws the bitmap vertically and is limited to just one byte total, resulting in a 1x8 bitmap.
// As a side effect, drawing a frame with drawVerticalBitmap is 4 ms faster than with Adafruit drawBitmap (about 1/32ms faster per call).
void drawVerticalBitmap(int16_t x, int16_t y, uint8_t bitmap)
{
    display.startWrite();
    for (uint8_t i = 0; i < 8; i++)
    {
        display.writePixel(x, y + i, !!(bitmap & (1 << i)));
    }
    display.endWrite();
}