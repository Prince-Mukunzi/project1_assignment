# project 1 assignment

c and arduino tasks for project 1 assignment.

## questions

### water quality monitor

takes temp and turbidity to calculate water quality index and status.

how to run:

```bash
cd question_one
gcc main.c -o main -lm
./main
```

sample output:

```
Temperature: 27.5
Turbidity: 15.0
========================================
Temperature: 27.50
Turbidity 15.00
Calculated Index: 90.00
Water-quality status: Good
========================================
```

---

### - mobile money system

basic agent menu loop to deposit, withdraw, check balance, and view summary with validation.

how to run:

```bash
cd question_two
gcc main.c -o main
./main
```

sample output:

```
===== MOBILE MONEY TRANSACTION SYSTEM =====
1. Deposit
2. Withdraw
3. Check Balance
4. Transaction Summary
5. Exit

Enter choice: 1
Enter deposit amount: 50000
Deposit successful
Current balance: 50000.00 RWF
```

---

### - delivery distance analysis

calculates total, average, longest route, count above limit and recursive sum from an array.

how to run:

```bash
cd question_three
gcc main.c -o main
./main
```

sample output:

```
Number of routes: 6
Enter distances: 12 25 18 40 15 30
Distance limit: 20

===== DELIVERY DISTANCE ANALYSIS =====
Total distance: 140 km
Average distance: 23.33 km
Longest route: 40 km
Routes above 20 km: 3
Recursive sum: 140 km
```

---

### - arduino smart parking

ultrasonic sensor car detector that toggles green/red leds and buzzer based on distance.

how to run:
open `question_four/main.cpp` in tinkercad or arduino ide, wire the components, run simulation

sample output:

```
Distance: 54.32 cm  --> green ON, red OFF, buzzer OFF
Distance: 14.85 cm  --> red ON, green OFF, buzzer ON
```
