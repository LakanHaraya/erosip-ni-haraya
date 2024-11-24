## `Tanglaw::magkutitap()`

**LAYUNIN:** 

Ang `magkutitap()` ay isang di-humhadlang na funsiyon na nagtitiyak na ang LED ay magpapalit-palit sa estado nito (sindi o panhaw) sa loob ng tinukoy na tagal ng sandali. Ginagamit nito ang `millis()` upang hindi makahadlang sa iba pang operasyon habang nagpapatuloy ang pagkutitap.

**MGA PARAMETRO**

* `tagal` *(unsigned long)*

    Ang tagal ng bawat estado ng LED (sa milisegundo). Halimbawa, kung nais ang LED na manatiling nakasindi o nakapanhaw ng 500ms, ipasa ang `500` bilang argumento.

\
**PAGTAKBO**

1. **Tingnan ang kasalukuyang oras** gamit ang `millis()`.

2. **Sinusuri ang sandaling lumipas** kung ang sandaling ito ay lumipas mula sa huling pagbabago (`millis() - _hulingMillis`) ay lampas sa `tagal`.

3. **Kapag lumampas ang sandali** sa itinakdang `tagal`, tatawagin ang `magtikwas()` upang palitan ang estado ng LED.

4. **Isinasapanahon** ang `hulingMillis` sa kasalukuyang sandali upang maghintay muli.
