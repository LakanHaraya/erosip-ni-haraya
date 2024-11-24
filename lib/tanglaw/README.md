## Dokumentasyon ng Klase `Tanglaw`

### **LAYUNIN**

Ang `Tanglaw` ay isang klase na nagmomodelo ng isang LED at nagbibigay ng iba't ibang kakayahan para sa kontrol, tulad ng pagsindi, pagpanhaw, pagtikwas ng estado, at di-humahadlang na pagkutitap.

---

### **MGA FUNSIYON**

`Tanglaw::magsindi()`: Nagtatakda ng pin sa HIGH para sindihan ang LED.

`Tanglaw::magpanhaw()`: Nagtatakda ng pin sa LOW para panhawin ang LED.

`Tanglaw::magtikwas()`: Pinapalitan ang estado ng LED mula SINDI patungong PANHAW at kabaligtaran, batay sa kasalukuyang estado ng `_estado`.

`Tanglaw::magkutitap(tagal)`: Nagbibigay ng kakayahan na magpakutitap ng LED nang paulit-ulit sa loob ng tinukoy na tagal ng sandali.