#include <Arduino.h>
#include "tanglaw.h"

// Ituring ang pin ng LED
#define LED_PIN 10

// Lumikha ng instansiya ng Tanglaw
Tanglaw led(LED_PIN, 1000);          // May nakatakdang tagal

void setup() {
    // Ang inisyalisasyon ay hinahawakan ng konstruktor ng Tanglaw
}

void loop() {
    led.magkutitap();            // Di-humahadlang na pagkutitap na may nakatakdang tagal 
    
    // Puwede din: led.magkutitap(500);     // Palitan ang tagal sa 500ms    
}