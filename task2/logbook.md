# Logbook:
## Task 2: 
- [Logbook:](#logbook)
  - [Task 2:](#task-2)
    - [What I did:](#what-i-did)
    - [Problems encountered:](#problems-encountered)
    - [Challenge:](#challenge)
    - [Other reflexions:](#other-reflexions)
---
### What I did: 
* Modified the test bench: Added the Vbuddy hardware header + Verilator headers
* Added *vbuddy.cfg* file to initialize the COM port connection  
* Added Vbuddy Hex counter display to the test bench 
* Modified the testbench to enable the flag as the set and reset button --> This is done using the vbdFlag() integrated function.
* Modified the testbench to plot a line on the TFT display instead of a 7-segment clock.
  * Needed to add extra cycles otherwise the elapsed time was too small.

---
### Problems encountered:

1. The Vbuddy crashed when the counter was initialized 
*   Fix : Needed to add 1s sleep function in between each Hex display for the Vbuddy to run. 
*   Possible cause: The counter is too fast and the display functions can't follow the rythm causing the hardware to crash


### Challenge:

1. The goal of this challenge is to use the onboard flag to make the counter CountUp when the flag = 1 and CountDown when the flag = 0. The value of the flag can be changed using the rotary switch. $\newline$

**Changes:**

In the _counter.sv_: 

```sv
always_ff @(posedge clk)
    if (en == 0) count <= count - {{00000001}};
    else    count <= count + {{WIDTH-1{1'b0}}, en};
endmodule

```
**EXPLANATION**: 
This makes the counter value reduce by one when the flag sets the enable value to 0 and increase by one when the flag sets the enable value to 1. 

In the testbench:

```cpp
top->en = vbdFlag();
```
**EXPLANATION**: 
This line points the value of enable and sets it equal to the value of the flag. 


![schematic](logbook_images/challenge%20L1T2.png)

The image above shows that when __en = 1__ the counter increases and when __en = 0__ it decreases. 


---
### Other reflexions: 

_None_

