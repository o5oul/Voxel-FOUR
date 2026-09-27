#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

// Define switch pins
const int buttonPin1 = D10; 
const int buttonPin2 = D9; 
const int buttonPin3 = D8; 
const int buttonPin4 = D7; 

// Keyboard Settings (Remove double quotes so macro constants are used)
const uint8_t key1 = KEY_LEFT_ARROW; 
const uint8_t key2 = KEY_UP_ARROW;
const uint8_t key3 = KEY_DOWN_ARROW;
const uint8_t key4 = KEY_RIGHT_ARROW;

const int debounceDelay = 10;

void setup() {
  pinMode(buttonPin1, INPUT_PULLUP); 
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP); 

  Keyboard.begin();
  USB.begin();

  Serial.begin(115200);
}

void loop() {
  // Pin 1
  if (digitalRead(buttonPin1) == LOW) {
    Keyboard.press(key1);
  } else {
    Keyboard.release(key1);
  }

  // Pin 2
  if (digitalRead(buttonPin2) == LOW) {
    Keyboard.press(key2);
  } else {
    Keyboard.release(key2);
  }

  // Pin 3
  if (digitalRead(buttonPin3) == LOW) {
    Keyboard.press(key3);
  } else {
    Keyboard.release(key3);
  }

  // Pin 4
  if (digitalRead(buttonPin4) == LOW) {
    Keyboard.press(key4);
  } else {
    Keyboard.release(key4);
  }

  delay(debounceDelay); // Small delay to stabilize readings
}