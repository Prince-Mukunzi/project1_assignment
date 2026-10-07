# question 4

smart parking space monitor using arduino ultrasonic sensor to turn on leds and buzzer based on distance.

## how to run

paste `main.cpp` into tinkercad circuits or arduino ide, wire the circuit, start simulation and open serial monitor at 9600 baud.

## sample output

serial monitor readings:

```
Distance: 54.32 cm
Distance: 45.10 cm
Distance: 14.85 cm
Distance: 8.20 cm
Distance: 62.00 cm
```

behavior:
- `distance > 20 cm`: space empty -> green led ON, red led OFF, buzzer OFF
- `distance <= 20 cm`: car parked -> red led ON, green led OFF, buzzer ON
