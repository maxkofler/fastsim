#ifndef __CONNECTION_H__
#define __CONNECTION_H__

#include "fastsim/pin.h"

//For size_t
#include <cstddef>

#include <vector>

namespace FastSIM{

    class Connection{

        public:
            Connection();

			/**
			 * @brief	Adds the provided Pin to the Connection
			 * @param	pin			The Pin to "hook" this Connection up to
			 * @return	0			OK
			 *			-1			Pin is nullptr
			 *			-2			Pin is already connected
			 */
			int						connect(Pin* pin);

			friend class FastSIM;
		#ifndef FRIEND_CONNECTION
		private:
		#endif
			size_t					_connection_id;

			std::vector<Pin*>		_pins;

    };

}

#endif
