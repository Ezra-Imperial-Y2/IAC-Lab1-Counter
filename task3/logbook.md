

# Logbook:
## Task 3: Vbuddy parameter & flag in one-shot mode 

- [Logbook:](#logbook)
  - [Task 3: Vbuddy parameter & flag in one-shot mode](#task-3-vbuddy-parameter--flag-in-one-shot-mode)
    - [What I did:](#what-i-did)
    - [Problems encountered:](#problems-encountered)
    - [Other reflexions:](#other-reflexions)

### What I did: 
*  **(1)** I programmed a loadable counter: 
  * By setting the rotary encoder to _vbdSetMode(1)_ whenever the switch is pressed the flag is registered to **1**; the flag is **ARMED**. When the flag register is read, it resets to **0**. 
  * Modifying the _testbench_, I created and If/Else statement so that pressing the rotary encoder forces the counter to pre-set to the value stored by *vbdValue()*
  


* In the *testbench*: 
```cpp

  if (vbdFlag() == 1){
            top->count = vbdValue();
        } else {
            top->rst = 0;
            top->en = 1;
        }
      
```

**EXPLANATION**:
* This piece of code checks if the value of *vbdFlag()* has been set to 1 (has been armed) ; if this condition evaluates to true, the value of the counter is set to the *vbdValue()* paramater. Else, the counter counts normally (reset = 0 and enable = 1)

![schematic](./logbook_images/one-shot%20encoder%20.png)

In the image above it can clearly be seen that between that the rotary switch has been pressed at the 19th cycle and the value stored in the flag register is equal to 50. **THUS**: The counter value jumps to 50 and continue counting up from there. 

![schematic](./logbook_images/one-shot%20encoder%202.png)

Same here after the 73rd clock cycle. As *vbdvalue()* = 10; the counter is pre-set to 10. 

* **(2)** I programmed a single stepping counter. Using the one-shot behaviour of the Vbuddy flag  
* By modifying the testbench; I coded an If/Else statement so that I would only increment the counter each the time the switch is pressed. 

```cpp
  if (vbdFlag() == 1){
            top->rst = 1;
        } else {
            top->rst = 0;
            top->en = 1;
        }
```

**EXPLANATION**:
* This piece of code checks if the value of *vbdFlag()* has been set to 1 (has been armed) ; if this condition evaluates to true, the value of the reset is set to the *1* paramater. Else, the counter counts normally (reset = 0 and enable = 1)

* By modifying the *counter.sv* I inverted the condition for the clock increment to happen: 
```sv
always_ff @(posedge clk)
    if (~rst) count <= count - {WIDTH{1'b0}};
    else    count <= count + {{WIDTH-1{1'b0}}, en};

```
**EXPLANATION**:
* This piece of code in combination with the testbench would force the counter only to increment whenever the value stored in the register = 1. Because whenever the flag value = 1, the reset value is set to 1. **THUS** as the reset condition is inverted in the *counter.sv*, the counter only increments when the switch is pressed. 

![schematic](./logbook_images/async%20counter%20L1T3.png)

In the image above it can clearly be seen that the value of the counter does not increment with the clock cycle. It is incremented whenever the rotary switch is pressed. 

---
### Problems encountered:

_None_

---
### Other reflexions: 

_None_

