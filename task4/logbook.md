

# Logbook:
## Task 4: Displaying count as BCD numbers

- [Logbook:](#logbook)
  - [Task 4: Displaying count as BCD numbers](#task-4-displaying-count-as-bcd-numbers)
    - [What I did:](#what-i-did)
    - [Problems encountered:](#problems-encountered)
    - [Other reflexions:](#other-reflexions)


### What I did: 
* I used a top-level module *topLayer.sv* which includes the counter module and a second module that converts 8-bit binary number into three BCD digits. 
* The algorithm used is called **Double Dabble Algorithm**: 
  * The algorithm perfoms like this: 

```txt
0000 0000 0000   11110011   Initialization
0000 0000 0001   11100110   Shift
0000 0000 0011   11001100   Shift
0000 0000 0111   10011000   Shift
0000 0000 1010   10011000   Add 3 to ONES, since it was 7
0000 0001 0101   00110000   Shift
0000 0001 1000   00110000   Add 3 to ONES, since it was 5
0000 0011 0000   01100000   Shift
0000 0110 0000   11000000   Shift
0000 1001 0000   11000000   Add 3 to TENS, since it was 6
0001 0010 0001   10000000   Shift
0010 0100 0011   00000000   Shift
   2    4    3
       BCD
```
**EXPLANATION**: 
The basic idea is to shift the binary number left, one bit at a tome, into locations reserved for the BCD results. 

1. Each time the number is shifted eft, it is multiplied by 2 as it is shifted to the BCD locations
1. The values in the BCD digits are the same as binary if its value is 9 or lower. However if it is 10 or above, the number is wrong for BCD. Instead, it should carry over to the next digit. A correction must be made b adding 6 to this digit value. 
1. The easiest way to do this is to detect if the value in the BCD digit locations are 5 or above BEFORE the shift (i.e X2). If it is >= 5, then add 3 to the value (i.e adjust by +6 after the shift).

* In the *testbench*: 
  * 1. Initialized simulation inputs according to the inputs needed by the top-level module.
  * 2. Used the onboard 7-segment display method *vbdex()* to display the converted BCD number.
  * 3. Changed the inputs stimuli to test the module

```cpp
 // (1) initialize simulation inputs 
    top->clk = 1;
    top->rst = 1;
    top->en = 1;
    top->v = {0b00000000};
```
```cpp
 // (2) ++ Send count values to Vbuddy
    vbdHex(4, (int(top->bcd) >> 16) & 0xF);
    vbdHex(3, (int(top->bcd) >> 8) & 0xF);
    vbdHex(2, (int(top->bcd) >> 4) & 0xF);
    vbdHex(1, (int(top->bcd) & 0xF));
```
```cpp
// (3) Change input stimuli
    top->rst = 0;
    top->en = vbdFlag();
    top->v = {0b11110011};
    if (Verilated::gotFinish()) exit(0);
```

**OUTPUT**: 

![schematic](./logbook_images/BCD%20converter%20L1T4.png)

As expected the converted BCD value is 243 (See worked out example above)

* In *doit.sh*: 
  * Referenced the cleanup to my *topLayer* module. 
  * Translated *topLayer.sv* (Verilog) into *topLayer_tb.cpp* (C++ testbench)
  * Built C++ project via Make
  * Run executable simulation file *VtopLayer*

---
### Problems encountered:
* I noticed some discrepancy between the two given files *bin2bcd.sv* and *topLayer.sv*. The input was referenced as *v* in the top-layer but *x* in the converter. Also, the input was assigned to the count in the top-layer.
  * FIX: Change the occurence of x with v.
  * FIX: Change the assignement of input with v. 
  
---
### Other reflexions: 

_None_

