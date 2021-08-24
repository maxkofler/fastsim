#include "part.h"

#include <exception>

Part::Part( uint32_t global_id,
            uint8_t min_inputs, uint8_t max_inputs, uint8_t input_count,
            uint8_t min_outputs, uint8_t max_outputs, uint8_t output_count)
            
            :   _min_inputs(min_inputs), _max_inputs(max_outputs),
                _min_outputs(min_outputs), _max_outputs(max_outputs)
{
    FUN();     

    //Check for input count in range
    if (input_count > max_inputs || input_count < min_inputs){
        PartException::Code ecode = PartException::INPUT_COUNT_OUT_OF_BOUNDS;
        PartException::Exception exception (ecode);
        throw exception;
    }

    //Check for output count in range
    if (output_count > max_outputs || output_count < min_outputs){
        PartException::Code ecode = PartException::OUTPUT_COUNT_OUT_OF_BOUNDS;
        PartException::Exception exception (ecode);
        throw exception;
    }
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
    }else if(newCount > this->_max_inputs){
        LOGE("New input count exceeds maximum input count!");
        return false;
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
    }else if(newCount > this->_max_outputs){
        LOGE("New output count exceeds maximum output count!");
        return false;
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
