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
    led.tikwas();           // Itikwas ang estado ng LED (SINDI/PANHAW)
    delay(1000);            // Maghintay ng 1 segundo bago muling magtikwas
}