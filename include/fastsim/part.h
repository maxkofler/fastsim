#ifndef __PART_H__
#define __PART_H__

#include <stdint.h>
#include <vector>

//For size_t
#include <cstddef>

#include "fastsim/pin.h"

namespace FastSIM{

    class Part{

        public:
			Part();
			Part(size_t count_inputs, size_t count_outputs);

			~Part();

			/**
			 * @brief Sets the Input of the Part to a Pin
			 * @param id					The endpoint id to attach to
			 * @param pin					A pointer to the pin to attach
			 */
			bool                      		setInput(uint8_t id, Pin* pin);

			/**
			 * @brief Sets the Output of the Part to a Pin
			 * @param id					The endpoint id to attach to
			 * @param pin					A pointer to the pin to attach
			 */
			bool                        	setOutput(uint8_t id, Pin* pin);
        
			friend class FastSIM;
		#ifndef FRIEND_PART
        private:
        #endif

			size_t							_part_id;

			size_t							_count_inputs;
			size_t							_count_outputs;

			//Pointer area
			Pin**							_inputs;//S
			Pin**							_outputs;//S

    };

}

#endif
