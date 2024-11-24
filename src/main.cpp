#include <Arduino.h>
#include "tanglaw.h"

// Ituring ang pin ng LED
#define LED_PIN_1 9
#define LED_PIN_2 10
#define LED_PIN_3 11

// Lumikha ng instansiya ng Tanglaw
Tanglaw ilawBerde(LED_PIN_1, 200);
Tanglaw ilawDilaw(LED_PIN_2, 100);
Tanglaw ilawPula(LED_PIN_3, 50);

void setup() {
    // Ang inisyalisasyon ay hinahawakan ng konstruktor ng Tanglaw
}

void loop() {
    ilawBerde.magkutitap();           // Di-humahadlang na pagkutitap na may tagal na 500ms
    ilawDilaw.magkutitap();
    ilawPula.magkutitap();
}
