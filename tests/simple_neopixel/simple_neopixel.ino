#include <Adafruit_NeoPixel.h>

#define PIN            6
#define NUMPIXELS      1

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_RGB + NEO_KHZ800);

void setup() {
  pixels.begin();
}

void loop() {
  pixels.setPixelColor(0, 255, 0, 0);
  pixels.setBrightness(10);
  pixels.show();
}
