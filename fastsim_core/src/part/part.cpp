#include "part.h"

Part::Part(uint32_t global_id, uint8_t input_count, uint8_t output_count){
    FUN();

    //Assign the global id
    this->_global_id = global_id;

    //Save amount of inputs / outputs
    this->_input_count = input_count;
    this->_output_count = output_count;

    //Create arrays for the inputs / outputs
    this->_inputs = new Connection*[this->_input_count] {nullptr};
    this->_outputs = new Connection*[this->_output_count] {nullptr};
}

void Part::setGID(uint32_t global_id){
    FUN();

    this->_global_id = global_id;
}

bool Part::setInputCount(uint8_t newCount){
    FUN();

    if (newCount < this->_input_count){
        LOGW("New input count is less than existing, last connections will be deleted!");
    }
    else if (newCount == this->_input_count){
        LOGI("New input count is the same as existing, doing nothing");
        return true;
    }

    {
        Connection** newArray = new Connection*[newCount] {nullptr};

        if (newCount > this->_input_count){
            for (uint8_t i = 0; i < this->_input_count; i++){
                newArray[i] = this->_inputs[i];
            }
        }else{
            for (uint8_t i = 0; i < newCount; i++){
                newArray[i] = this->_inputs[i];
            }
        }

        delete[] this->_inputs;

        this->_input_count = newCount;
        this->_inputs = newArray;
    }

    return true;
}

bool Part::setOutputCount(uint8_t newCount){
    FUN();

    if (newCount < this->_output_count){
        LOGW("New output count is less than existing, last connections will be deleted!");
    }
    else if (newCount == this->_output_count){
        LOGI("New output count is the same as existing, doing nothing");
        return true;
    }

    {
        Connection** newArray = new Connection*[newCount] {nullptr};

        if (newCount > this->_output_count){
            for (uint8_t i = 0; i < this->_output_count; i++){
                newArray[i] = this->_outputs[i];
            }
        }else{
            for (uint8_t i = 0; i < newCount; i++){
                newArray[i] = this->_outputs[i];
            }
        }

        delete[] this->_outputs;

        this->_output_count = newCount;
        this->_outputs = newArray;
    }

    return true;
}