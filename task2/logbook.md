# Logbook:
## Task 2: 
- [Logbook:](#logbook)
  - [Task 2:](#task-2)
    - [What I did:](#what-i-did)
  - [* ...*TBC*...](#-tbc)
    - [Problems encountered:](#problems-encountered)
    - [Other reflexions:](#other-reflexions)
---
### What I did: 
* Modified the test bench: Added the Vbuddy hardware header + Verilator headers
* Added *vbuddy.cfg* file to initialize the COM port connection  
* Added Vbuddy Hex counter display to the test bench 
* ...*TBC*...
---
### Problems encountered:

1. The Vbuddy crashed when the counter was initialized 
*   Fix : Needed to add 1s sleep function in between each Hex display for the Vbuddy to run. 
*   Possible cause: The counter is too fast and the display functions can't follow the rythm causing the hardware to crash

---
### Other reflexions: 

_None_

