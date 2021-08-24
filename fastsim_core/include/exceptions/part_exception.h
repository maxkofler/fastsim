#ifndef __PART_EXCEPTION_H__
#define __PART_EXCEPTION_H__

#include <exception>
#include <string>

#include "log.h"

namespace PartException{
    enum Code{
        INPUT_COUNT_OUT_OF_BOUNDS,
        OUTPUT_COUNT_OUT_OF_BOUNDS
    };

    class Exception : public std::exception{
    public:
        Exception(Code code);

        const char*             what(){return this->_msg.c_str();}
    private:
        std::string             _msg;
    };
}

#endif