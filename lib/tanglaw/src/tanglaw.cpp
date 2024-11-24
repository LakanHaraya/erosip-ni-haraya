#include <Arduino.h>
#include "tanglaw.h"

// Konstruktor na may nakatakdang halaga para sa tagal ng pagkutitap
Tanglaw::Tanglaw(uint8_t pin, unsigned long nakatakdangTagal) {
    _pin = pin;                     // Italaga ang pin sa varyabol ng klase
    _estado = false;                // Itakda ang inisyal na estado ng LED sa PANHAW
    _hulingMillis = 0;              // Muling itakda ang sandali ng huling pagkutitap
    _tagal = nakatakdangTagal;      // Nakatakdang tagal ng pagkutitap (500ms)
    pinMode(_pin, OUTPUT);          // Itakda ang pin bilang OUTPUT
}

// Magsisindi ng LED
void Tanglaw::magsindi() {
    digitalWrite(_pin, HIGH);   // Itakda ang pin sa HIGH para magsindi ng LED
}

// Magpapanhaw ng LED
void Tanglaw::magpanhaw() {
    digitalWrite(_pin, LOW);    // Itakda ang pin sa LOW para magpanhaw ng LED
}

// Magpapatikwas ng LED (SINDI/PANHAW)
void Tanglaw::magtikwas() {
    if (_estado) { magpanhaw(); }       // Kung NAKASINDI ang LED, panhawin ito
    else { magsindi(); }                // Kung NAKAPANHAW ang LED, sindihan ito
    _estado = !_estado;                 // Itikwas ang estado ng LED
}

// Di-humahadlang na pakutitap ng LED sa loob ng tinukoy na tagal (ms)
void Tanglaw::magkutitap(unsigned long tagal) {
    if (tagal > 0) { _tagal = tagal; }                      // Kung ang `tagal` ay 0, gamitin ang nakatakdang tagal
    unsigned long kasalukuyangMillis = millis();            // Kumuha ng kasalukuyang sandali mula sa millis()
    if (kasalukuyangMillis - _hulingMillis >= _tagal) {     // Kung lumipas na ang tinukoy na sandali mula sa huling pagbabago
        magtikwas();                                        // Tawagin ang `magtikwas()`
        _hulingMillis = kasalukuyangMillis;                 // Isapanahon ang huling sandali ng pagtikwas
    }
}
