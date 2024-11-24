## `Tanglaw::magtikwas()`

**LAYUNIN:** 

Palitan ang kasalukuyang estado ng LED: Kung NAKASINDI ang LED, papanhawin ito (magiging PANHAW), at kung NAKAPANHAW ang LED, sisindihan ito (magiging SINDI)

**MGA PARAMETRO**

Ang funsiyong ito ay hindi nangangailangan ng anumang parametro at hindi rin ito nagbabalik ng anumang halaga.

**PAGTAKBO**

1. **Kung ang LED ay NAKASINDI** (`_estado = true`), tatawagin nito ang `magpanhaw()` upang panhawin ang LED.

2. **Kung ang LED ay NAKAPANHAW** (`_estado = false`), tatawagin nito ang `magsindi()` upang sindihan ang LED.

3. **Ititikwas ang estado** ng LED gamit ang `_estado = !_estado`.



