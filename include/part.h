#ifndef __PART_H__
#define __PART_H__

#include <stdint.h>
#include <vector>

#include "connection.h"

namespace FastSIM{

    class Part{

        public:
            Part();

            bool                      		setInput(uint8_t id, Connection* connection);
            bool                        	setOutput(uint8_t id, Connection* connection);
        
        #ifndef UNITTEST
        private:
        #endif

			std::vector<Connection*>        _inputs;
			std::vector<Connection*>        _outputs;

    };

}

#endif