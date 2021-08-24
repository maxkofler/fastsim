#include "part.h"

#include <exception>

Part::Part( uint32_t global_id,
            uint8_t min_inputs, uint8_t max_inputs, uint8_t input_count,
            uint8_t min_outputs, uint8_t max_outputs, uint8_t output_count)
            
            :   _global_id(global_id),
                _min_inputs(min_inputs), _max_inputs(max_inputs), _count_inputs(0),
                _min_outputs(min_outputs), _max_outputs(max_outputs), _count_outputs(0),
                _is_initialized(false)
{
    FUN();     

    //Check for input count in range
    if (input_count > max_inputs || input_count < min_inputs){
        PartException::Code ecode = PartException::INPUT_COUNT_OUT_OF_BOUNDS;
        std::string append = std::to_string(min_inputs) + " < (";
        append += std::to_string(input_count) + ") < ";
        append += std::to_string(max_inputs);
        PartException::Exception exception (this, ecode, append);
        throw exception;
    }

    //Check for output count in range
    if (output_count > max_outputs || output_count < min_outputs){
        PartException::Code ecode = PartException::OUTPUT_COUNT_OUT_OF_BOUNDS;
        std::string append = std::to_string(min_outputs) + " < (";
        append += std::to_string(output_count) + ") < ";
        append += std::to_string(max_outputs);
        PartException::Exception exception (this, ecode, append);
        throw exception;
    }

    this->_count_inputs = input_count;
    this->_count_outputs = output_count;

    //Create input and output arrays
    this->_inputs = new Connection*[this->_count_inputs] {nullptr};
    this->_outputs = new Connection*[this->_count_outputs] {nullptr};

    this->_is_initialized = true;
}

void Part::setGID(uint32_t global_id){
    FUN();

    this->_global_id = global_id;
}

bool Part::setInputCount(uint8_t newCount){
    FUN();

    if (newCount < this->_count_inputs){
        LOGW("New input count is less than existing, last connections will be deleted!");
    }
    else if (newCount == this->_count_inputs){
        LOGI("New input count is the same as existing, doing nothing");
        return true;
    }else if(newCount > this->_max_inputs){
        PartException::Code ecode = PartException::INPUT_COUNT_OUT_OF_BOUNDS;
        std::string append = std::to_string(this->_min_inputs) + " < (";
        append += std::to_string(newCount) + ") < ";
        append += std::to_string(this->_max_inputs);
        PartException::Exception exception (this, ecode, append);
        return false;
    }

    {
        Connection** newArray = new Connection*[newCount] {nullptr};

        if (newCount > this->_count_inputs){
            for (uint8_t i = 0; i < this->_count_inputs; i++){
                newArray[i] = this->_inputs[i];
            }
        }else{
            for (uint8_t i = 0; i < newCount; i++){
                newArray[i] = this->_inputs[i];
            }
        }

        delete[] this->_inputs;

        this->_count_inputs = newCount;
        this->_inputs = newArray;
    }

    return true;
}

bool Part::setOutputCount(uint8_t newCount){
    FUN();

    if (newCount < this->_count_outputs){
        LOGW("New output count is less than existing, last connections will be deleted!");
    }
    else if (newCount == this->_count_outputs){
        LOGI("New output count is the same as existing, doing nothing");
        return true;
    }else if(newCount > this->_max_outputs){
        PartException::Code ecode = PartException::OUTPUT_COUNT_OUT_OF_BOUNDS;
        std::string append = std::to_string(this->_min_outputs) + " < (";
        append += std::to_string(newCount) + ") < ";
        append += std::to_string(this->_max_outputs);
        PartException::Exception exception (this, ecode, append);
        return false;
    }

    {
        Connection** newArray = new Connection*[newCount] {nullptr};

        if (newCount > this->_count_outputs){
            for (uint8_t i = 0; i < this->_count_outputs; i++){
                newArray[i] = this->_outputs[i];
            }
        }else{
            for (uint8_t i = 0; i < newCount; i++){
                newArray[i] = this->_outputs[i];
            }
        }

        delete[] this->_outputs;

        this->_count_outputs = newCount;
        this->_outputs = newArray;
    }

    return true;
}

Connection* Part::getInput(uint8_t id){
    FUN();

    if (id < this->_min_inputs-1 || id >= this->_count_inputs){
        PartException::Code code = PartException::REQUESTED_INPUT_ID_INVALID;
        PartException::Exception ex(this, code);
        throw ex;
    }

    return this->_inputs[id];
}

Connection* Part::getOutput(uint8_t id){
    FUN();

    if (id < this->_min_outputs-1 || id >= this->_count_outputs){
        PartException::Code code = PartException::REQUESTED_OUTPUT_ID_INVALID;
        PartException::Exception ex(this, code);
        throw ex;
    }

    return this->_outputs[id];
}