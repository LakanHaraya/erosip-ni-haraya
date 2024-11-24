#include <Arduino.h>
#include "tanglaw.h"

// Gumawa ng Tanglaw objects para sa 5 LEDs
Tanglaw ilaw1(11);
Tanglaw ilaw2(10);
Tanglaw ilaw3(9);
Tanglaw ilaw4(8);
Tanglaw ilaw5(7);

void setup() {
    // Walang kinakailangan sa setup para sa klase
}

void loop() {
    // Advanced ilaw Patterns:
    ilaw1.kisap(15);   // Minimum kisap
    ilaw2.kisap(100);  // Kisap tuwing 100ms
    ilaw3.kisap(200);  // Kisap tuwing 200ms
    ilaw4.kisap(500);  // Kisap tuwing 500ms
    ilaw5.kisap();     // Default na kisap (500ms)

    delay(10);  // Small delay for CPU stability
}
