#include <Arduino.h>
#include "tanglaw.h"

// Ituring ang pin ng LED
#define LED_PIN 10

// Lumikha ng instansiya ng Tanglaw
Tanglaw led(LED_PIN);

void setup() {
    // Inisyalisahin ang LED (natapos sa konstruktor)
}

void loop() {
    led.sindi();     // MAGSINDI ng LED
    delay(1000);        // Panatilihing NAKASINDI sa 1 segundo
}