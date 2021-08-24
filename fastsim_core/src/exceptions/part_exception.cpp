#include "exceptions/part_exception.h"

namespace PartException{
    Exception::Exception(Part* part, Code code, std::string append){
        FUN();

        this->_code = code;
        this->_part = part;

        switch(code){
            case INPUT_COUNT_OUT_OF_BOUNDS:
                this->_msg = "Input count is out of bounds";
                break;

            case OUTPUT_COUNT_OUT_OF_BOUNDS:
                this->_msg = "Output count is out of bounds";
                break;

            case REQUESTED_INPUT_ID_INVALID:
                this->_msg = "The requested input ID is not valid";
                break;
            
            case REQUESTED_OUTPUT_ID_INVALID:
                this->_msg = "The requested output ID is not valid";
                break;
            
            default:
                this->_msg = "Unknown";
        }

        //Append something if necessary
        if (!append.empty()){
            this->_msg += ": " + append;
        }

        {
            std::string msg = "[EXCEPTION::Part](gID=" + std::to_string(this->_part->_global_id);
            msg += "(" + Log::toHexString(this->_part->_global_id) + ")";
            msg += ", exCODE=" + std::to_string(code) + "(" + Log::toHexString(code) + ")) ";
            msg += "-> " + this->_msg;
            LOGE(msg);
        }
    }
}