#ifndef __PART_EXCEPTION_H__
#define __PART_EXCEPTION_H__

namespace PartException{
    class Exception;
}

#include <exception>
#include <string>

#include "part.h"

#include "log.h"

namespace PartException{
    enum Code{
        INPUT_COUNT_OUT_OF_BOUNDS,
        OUTPUT_COUNT_OUT_OF_BOUNDS,
        REQUESTED_INPUT_ID_INVALID,
        REQUESTED_OUTPUT_ID_INVALID
    };

    class Exception : public std::exception{
    public:
        Exception(Part* part, Code code, std::string append = "");

        const char*             what(){return this->_msg.c_str();}
        Code                    getCode(){return this->_code;}
    private:
        std::string             _msg;
        Code                    _code;
        Part*                   _part;
    };
}

#endif