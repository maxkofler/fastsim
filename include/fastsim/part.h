#ifndef __PART_H__
#define __PART_H__

#include <stdint.h>
#include <vector>

//For size_t
#include <cstddef>

#include "connection.h"

namespace FastSIM{

    class Part{

        public:
            Part();
			Part(size_t count_inputs, size_t count_outputs);

			~Part();

            bool                      		setInput(uint8_t id, Connection* connection);
            bool                        	setOutput(uint8_t id, Connection* connection);
        
		#ifndef FRIEND_PART
        private:
        #endif

			size_t							_count_inputs;
			size_t							_count_outputs;

			Connection**					_inputs;
			Connection**					_outputs;

    };

}

#endif
