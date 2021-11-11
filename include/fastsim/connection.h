#ifndef __CONNECTION_H__
#define __CONNECTION_H__

#include "fastsim/fastSimComponent.h"
#include "fastsim/pin.h"

//For size_t
#include <cstddef>

#include <vector>

namespace FastSIM{

	class Connection : public FastSIMComponent{

        public:
            Connection();

			~Connection();

			/**
			 * @brief	Adds the provided Pin to the Connection
			 * @param	pin			The Pin to "hook" this Connection up to
			 * @return	0			OK
			 *			-1			Pin is nullptr
			 *			-2			Pin is already connected
			 */
			int						connect(Pin* pin);

			/**
			 * @brief Optimizes the objects of this class for simulation
			 * @return				The amount of optimized items
			 */
			int						optimize();

			friend class FastSIM;
		#ifndef FRIEND_CONNECTION
		private:
		#endif
			size_t					_connection_id;

			std::vector<Pin*>		_pins;

			size_t					_o_sizePins = 0;

			//Pointer area
				Pin**				_o_pins = nullptr;//S
    };

}

#endif
