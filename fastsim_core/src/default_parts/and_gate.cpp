#include "default_parts/and_gate.h"

AndGate::AndGate(uint32_t global_id, uint8_t input_count)
    :   Part(   global_id, 
                2, 0xFF, input_count,
                1, 1, 1){
    FUN();   
}

uint8_t AndGate::compute(){
    FUN();

    return 0;
}
