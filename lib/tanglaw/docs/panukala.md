## Batayang Kontrol sa LED

### 1. Magsindi ng LED `Tanglaw::magsindi()`

Gamit ang `digitalWrite(_pin, HIGH)` para paganahin ang LED.

### 2. Magpanhaw ng LED `Tanglaw::magpanhaw()`

Gamit ang `digitalWrite(_pin, LOW)` para di-paganahin ang LED.

### 3. Toggle LED

Palitan ang kasalukuyang estado ng LED (mula SINDI papuntang PANHAW o kabaligtaran).

### 4. Blink LED

Ipailaw ang LED sa loob ng tiyak na oras, pagkatapos ay i-off ito sa parehong oras.

## Advanced LED Patterns

### 5. Fading LED

Pagsasaayos ng brightness gamit ang analogWrite(pin, value) (PWM).

### 6. Breathing Effect

Gradual fade-in at fade-out effect gamit ang sinusoidal o linear pattern.

### 7. Chase Pattern

Pailawin ang isang LED nang sunod-sunod sa isang grupo.

### 8. Knight Rider / Larson Scanner Effect

Paikot na ilaw mula kaliwa papuntang kanan at pabalik.

### 9. Random Blink

Iba't ibang LEDs ang iilaw sa random na oras at pattern.

## Interactive LED Controls

### 10. LED Toggle via Button Press

I-on o i-off ang LED tuwing pinipindot ang button.

### 11. Brightness Control via Potentiometer

Baguhin ang liwanag ng LED gamit ang input mula sa potentiometer.

### 12. LED Controlled by Joystick

Baguhin ang estado ng LED base sa posisyon ng joystick (hal., ON kapag pataas, OFF kapag pababa).

## Timing and Sequencing

### 13. Delayed Blink

Pagkakaroon ng mas mahabang delay sa pagitan ng ON at OFF states.

### 14. LED Sequence with Specific Timing

Magpatakbo ng LED sequence na may fixed time intervals.

### 15. Strobe Light Effect

Mabilis na pagpapailaw at pagpatay ng LED sa mataas na frequency.

## Signal or Status Indicators

### 16. Heartbeat Effect

Gamitin ang LED para gayahin ang tibok ng puso, na ginagamit bilang status indicator.

### 17. Battery Level Indicator

Magpakita ng iba’t ibang kulay o pattern depende sa input voltage.

### 18. Error/Warning Indicator

Patuloy na pag-blink para sa error o status warning.

### 19. Traffic Light Simulation

Paikot na sequence ng red, yellow, at green LEDs.

## Multi-LED Control

### 20. Binary Counter Display

Gamit ang maraming LEDs para ipakita ang binary counting sequence.

### 21. Custom Animation

Magpatupad ng user-defined pattern sa isang grupo ng LEDs.

### 22. LED Matrix Control

Mag-control ng grid ng LEDs para magpakita ng patterns o simpleng text.
## Input-Dependent Effects

### 23. LED Reacting to Sensor Input

Baguhin ang estado ng LED base sa pagbabasa ng sensor, tulad ng temperature, light, o proximity sensor.

### 24. LED Reacting to Sound

Patay-sindi ang LED base sa sound level mula sa microphone.

### 25. LED Reacting to Light Sensor

Mag-adjust ng brightness ng LED depende sa ambient light.