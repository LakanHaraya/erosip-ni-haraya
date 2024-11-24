#ifndef TANGLAW_H
#define TANGLAW_H

#include <Arduino.h>

class Tanglaw {
private:
    uint8_t _pin;                   // numero ng pin ng LED
    bool _estado;                   // Kasalukuyang estado ng LED (SINDI o PANHAW)
    unsigned long _hulingMillis;    // Para subaybayan ang sandali ng huling pagkutitap
    unsigned long _tagal;           // Tagal ng pagkutitap (sandali ng sindi-panhaw)

public:
    // Konstruktor na may nakatakdang halaga para sa tagal ng pagkutitap
    Tanglaw(uint8_t pin, unsigned long nakatakdangTagal = 500);

    void magsindi();                            // MAGSINDI ng LED
    void magpanhaw();                           // MAGPANHAW ng LED
    void magtikwas();                           // Patikwasin ang LED (SINDI/PANHAW)
    void magkutitap(unsigned long tagal = 0);   // Di-humahadalang na magpakutitap ng LED sa loob ng tinukoy na tagal
};

#endif  // TANGLAW_H