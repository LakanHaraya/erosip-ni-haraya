#include <Arduino.h>
#include "tanglaw.h"

Tanglaw ilaw1(11);  // ~analogPin
Tanglaw ilaw2(10);  // ~analogPin
Tanglaw ilaw3(9);   // ~analogPin
Tanglaw ilaw4(8);   
Tanglaw ilaw5(7);

void setup() {
}

void loop() {
    ilaw1.kupas(500);
    ilaw2.kupas(500);
    ilaw3.kupas(500);
    // ilaw4.kisap();
    // ilaw5.kisap();

    // delay(200);
}
