#include "exceptions/part_exception.h"

namespace PartException{
    Exception::Exception(Code code){
        FUN();

        switch(code){
            case INPUT_COUNT_OUT_OF_BOUNDS:
                this->_msg = "Input count is out of bounds";
                break;

            case OUTPUT_COUNT_OUT_OF_BOUNDS:
                this->_msg = "Output count is out of bounds";
                break;
            
            default:
                this->_msg = "Unknown";
        }

        LOGE("[EXCEPTION::Part](" + std::to_string(code) + ") -> " + this->_msg);
    }
}