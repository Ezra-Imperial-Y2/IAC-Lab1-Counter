#include "VtopLayer.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env){
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    //init top verilog instance 
    VtopLayer* top = new VtopLayer;
    //init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("topLayer.vcd");

    //init Vbuddy 
    if (vbdOpen() != 1) return (-1);
    vbdHeader("L1T4: 0b-BCD");
    usleep(100000);

   


    //run simulation for many clock cycles 
    for(i=0; i<50; i++){
        
        //dump variables into VCD file and toggle clock
        for (clk=0; clk<2; clk++) {
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval();
        }

        // ++ Send count values to Vbuddy
        vbdHex(4, (int(top->bcd) >> 16) & 0xF);
        vbdHex(3, (int(top->bcd) >> 8) & 0xF);
        vbdHex(2, (int(top->bcd) >> 4) & 0xF);
        vbdHex(1, (int(top->bcd) & 0xF));

        vbdCycle(i+1);

        // End of Vbuddy output section

        //Change input stimuli
        top->rst = 0;
        top->en = vbdFlag();
        top->v = {0b11110011};
        if (Verilated::gotFinish()) exit(0);
    }
    vbdClose();
    tfp->close();
    exit(0);
}