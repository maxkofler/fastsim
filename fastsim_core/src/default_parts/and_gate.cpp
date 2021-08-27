#include "default_parts/and_gate.h"

//Allow only 1 output
#define __C_OUTPUTS__ 1

AndGate::AndGate(uint32_t global_id, uint8_t input_count)
    :   Part(   global_id, 
                2, 0xFF, input_count,
                __C_OUTPUTS__, __C_OUTPUTS__, __C_OUTPUTS__){
    FUN();   
}

uint8_t AndGate::compute(){
    FUN();

    this->_outputs[0]->setState(true);

    for (size_t i = 0; i < this->_count_inputs; i++){
        if (this->_inputs[i] == nullptr)
            continue;

        if (!this->_inputs[i]->getState()){
            this->_outputs[0]->setState(false);
            break;
        }
    }

    return 0;
}
