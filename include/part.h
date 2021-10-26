#ifndef __PART_H__
#define __PART_H__

#include <stdint.h>

#include "connection.h"

namespace FastSIM{

    class Part{

        public:
            Part();
        
        #ifndef UNITTEST
        private:
        #endif

            Connection connection;
    };

}

#endif