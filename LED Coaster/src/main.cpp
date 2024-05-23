#include <Arduino.h>
#include <FastLED.h>

#define LED_PIN 9   // Pin connected to the LED
#define NUM_LEDS 10  // Number of LEDs

CRGB leds[NUM_LEDS]; // LED array

// Define the list of modes
const char* modes[] = {"Static", "Breathing", "Chaser", "Rainbow"};
const int numModes = sizeof(modes) / sizeof(modes[0]);

// Function prototypes
void changeLEDMode(String mode, CRGB color);
void staticMode(CRGB color);
void breathingMode(CRGB color);
void chaserMode(CRGB color);
void rainbowMode();

void setup() {
  Serial.begin(9600); // Initialize Serial communication
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  // Example usage:
  // changeLEDMode("Static", CRGB::Red); // Set the mode to Static with Red color
  // changeLEDMode("Breathing", CRGB::Blue); // Set the mode to Breathing with Blue color
  // changeLEDMode("Chaser", CRGB::Green); // Set the mode to Chaser with Green color
  // changeLEDMode("Rainbow", CRGB::Black); // Set the mode to Rainbow (color is not used)
  
  // Input that could come from a Bluetooth or WiFi module
  String mode = "Static"; 
  CRGB color = CRGB::Red; 
  
  changeLEDMode(mode, color); 
  delay(1000); // Delay to simulate some time between mode changes
}

void changeLEDMode(String mode, CRGB color) {
  if (mode == "Static") {
    staticMode(color);
  } else if (mode == "Breathing") {
    breathingMode(color);
  } else if (mode == "Chaser") {
    chaserMode(color);
  } else if (mode == "Rainbow") {
    rainbowMode();
  } else {
    //throw "Invalid mode";
  }
}

void staticMode(CRGB color) {
  // Static mode: Set all LEDs to the same color
  fill_solid(leds, NUM_LEDS, color); 
  FastLED.show();
}

void breathingMode(CRGB color) {
  // Breathing mode implementation
  // Gradually change brightness of the color
  for (int i = 0; i < 255; i++) {
    leds[0] = color;
    leds[0].fadeLightBy(255 - i);
    FastLED.show();
    delay(10);
  }
  for (int i = 255; i > 0; i--) {
    leds[0] = color;
    leds[0].fadeLightBy(255 - i);
    FastLED.show();
    delay(10);
  }
}

void chaserMode(CRGB color) {
  // Chaser mode: LEDs chase each other with a specified color
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = color;
    FastLED.show();
    delay(100);
    leds[i] = CRGB::Black;
    FastLED.show();
  }
}

void rainbowMode() {
  // Rainbow mode: Cycle through the colors of the rainbow
  for (int i = 0; i < 255; i++) {
    fill_rainbow(leds, NUM_LEDS, i, 7); // Fill with rainbow colors
    FastLED.show();
    delay(30);
  }
}
