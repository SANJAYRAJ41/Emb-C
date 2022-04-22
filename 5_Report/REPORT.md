


# Requirements

# INTRODUCTION

Manipulating led is a process of blinking the led.It can be done by using many ways,

1.Relays.

2.Transistors.

3.Inverter.

4.555 Timer.

5.ATmega328 Microcontroller. etc

Here swtich is used to blink the two LED using ATmega328(a microcontroller).

# Objective
The main objective is to manipulating the led using ATmega328 and a switch to controll two LED's.
# Components used
1.ATmega328

2.Two LED

3.Switch

4.Resistor
# software used
1.simulIDe

2.ARDUINO
# 4W's and 1 H's
# Why
Is used to flicker two led using ATmega328.
# Where
It can be used in any field.
# Who
Mainly it is used by the students.
Embedded Field Students can work through this project.
# When
It can be implemented in the schools and collages.
# How
The main component is ATmega32## TEST PLAN

# Behaviour Diagram
<img width="860" alt="2_Behaviour diagram" src="https://user-images.githubusercontent.com/102659076/164598119-93239ff8-2f06-4ce4-bc17-44123b04b322.png">

# Structural Diagram
<img width="665" alt="2_structural diagram" src="https://user-images.githubusercontent.com/102659076/164597943-96e0635c-cb86-434f-bc2a-ed8976f3022e.png">

# Block Diagram
<img width="757" alt="2_Block diagram" src="https://user-images.githubusercontent.com/102659076/164597671-ac71715f-700e-42ba-ad7c-37116abb51d7.png">

# Simulation
<img width="934" alt="simulation" src="https://user-images.githubusercontent.com/102659076/164597396-3cb0ae6d-3bfb-4c0e-ae5a-34ee287961fc.png">

# switch ON
<img width="997" alt="switch on" src="https://user-images.githubusercontent.com/102659076/164596843-3295a794-6cb1-470a-9e33-ffb76d1d2966.png">
# Switch OFF
<img width="945" alt="switch off" src="https://user-images.githubusercontent.com/102659076/164596368-b5bed195-fdff-42e1-b338-b071df866023.png">


```http
HIGH LEVEL REQUIRED
```

| ID | DESCRIPTION     | Expected i/p   | Expected o/p |
| :--| :-------------- | :------------  | :------------|
| HLR_1 | Switch on    | High power     | LED ON   |
| HLR_2 | Switch off    |  No power     | LED OFF  |




```http
LOW LEVEL REQUIRED
```
| ID | DESCRIPTION     | Expected i/p   | Expected o/p |
| :--| :-------------- | :------------  | :------------|
| LLR_1 | Switch on    | value 1    | LED ON   |
| LLR_2 | Switch off    |  value 0     | LED OFF  |




