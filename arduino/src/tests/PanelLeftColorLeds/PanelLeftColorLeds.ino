/// @file    Blink.ino
/// @brief   Blink the first LED of an LED strip
/// @example Blink.ino

#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 60

// For led chips like WS2812, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
// Clock pin only needed for SPI based chipsets when not using hardware SPI
#define DATA_PIN 2
#define CLOCK_PIN 13
#define COLOR_ORDER GRB
#define CHIPSET WS2812B
#define VOLTS 5
#define BRIGHTNESS 150
#define MAX_AMPS 300

#define NOGO 0
#define GO 1
#define LBLEED 2
#define RBLEED 3
#define STBY 4
#define SPDBRK 5
#define LBARUP 6
#define REC 7
#define LBARDOWN 8
#define XMIT 9
#define ASBJOH 10
#define MASTER_CAUTION 11
#define FIRE_LEFT 12


// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
    // Uncomment/edit one of the following lines for your leds arrangement.
    // ## Clockless types ##
    FastLED.addLeds<CHIPSET, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);  // GRB ordering is assumed
    FastLED.setMaxPowerInVoltsAndMilliamps(VOLTS, MAX_AMPS);
    FastLED.setBrightness(BRIGHTNESS);
    FastLED.clear();
    FastLED.show();

}

void loop() { 
  // Turn the LED on, then pause
  leds[NOGO] = CRGB::Yellow;
  leds[GO] = CRGB::Green;
  leds[LBLEED] = CRGB::Red;
  leds[RBLEED] = CRGB::Red;
  leds[STBY] = CRGB::Green;
  leds[SPDBRK] = CRGB::Green;
  leds[LBARUP] = CRGB::Red;
  leds[REC] = CRGB::Green;
  leds[LBARDOWN] = CRGB::Green;
  leds[XMIT] = CRGB::Green;
  leds[ASBJOH] = CRGB::Yellow;
  leds[MASTER_CAUTION] = CRGB::Yellow;
  leds[FIRE_LEFT] = CRGB::Red;
  FastLED.show();
  delay(500);
}
