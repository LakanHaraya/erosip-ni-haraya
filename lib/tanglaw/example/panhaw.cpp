#include <Arduino.h>
#include "tanglaw.h"

// Ituring ang pin ng LED
#define LED_PIN 10

// Lumikha ng instansiya ng Tanglaw
Tanglaw led(LED_PIN);

void setup() {
    // Ang inisyalisasyon ay hinahawakan ng konstruktor ng Tanglaw
}

void loop() {
    led.panhaw();        // MAGPANHAW ng LED
    delay(1000);            // Panatilihing NAKAPANHAW sa 1 segundo
}