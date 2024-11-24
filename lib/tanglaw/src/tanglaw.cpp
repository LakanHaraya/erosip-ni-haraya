#include <Arduino.h>
#include "tanglaw.h"

// Konstruktor na may nakatakdang halaga para sa tagal ng pagkisap
Tanglaw::Tanglaw(uint8_t pin, unsigned long nakatakdangTagal) {
    _pin = pin;                                     // Italaga ang pin sa varyabol ng klase
    _estado = false;                                // Itakda ang inisyal na estado ng LED sa PANHAW
    _hulingMillis = 0;                              // Muling itakda ang sandali ng huling pagkutitap
    _tagal = max(nakatakdangTagal, MIN_TAGAL);      // Tiyakin na ang tagal ay hindi mas mababa sa MIN_TAGAL
    pinMode(_pin, OUTPUT);                          // Itakda ang pin bilang OUTPUT
}

// Magsisindi ng LED
void Tanglaw::sindi() {
    digitalWrite(_pin, HIGH);   // Itakda ang pin sa HIGH para magsindi ng LED
}

// Magpapanhaw ng LED
void Tanglaw::panhaw() {
    digitalWrite(_pin, LOW);    // Itakda ang pin sa LOW para magpanhaw ng LED
}

// Magpapatikwas ng LED (SINDI/PANHAW)
void Tanglaw::tikwas() {
    if (_estado) { panhaw(); }      // Kung NAKASINDI ang LED, panhawin ito
    else { sindi(); }               // Kung NAKAPANHAW ang LED, sindihan ito
    _estado = !_estado;             // Itikwas ang estado ng LED
}

// Di-humahadlang na pakisap ng LED sa loob ng tinukoy na tagal (ms)
void Tanglaw::kisap(unsigned long tagal) {
    if (tagal > 0) { _tagal = max(tagal, MIN_TAGAL); }      // Tiyakin na ang tagal ay hindi mas mababa sa MIN_TAGAL
    unsigned long kasalukuyangMillis = millis();            // Kumuha ng kasalukuyang sandali mula sa millis()
    if (kasalukuyangMillis - _hulingMillis >= _tagal) {     // Kung lumipas na ang tinukoy na sandali mula sa huling pagbabago
        tikwas();                                           // Tawagin ang `magtikwas()`
        _hulingMillis = kasalukuyangMillis;                 // Isapanahon ang huling sandali ng pagtikwas
    }
}
