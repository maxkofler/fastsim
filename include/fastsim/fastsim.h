#ifndef __FASTSIM_H__
#define __FASTSIM_H__

#include "part.h"
#include "pin.h"
#include "connection.h"

#include <vector>

//For size_t
#include <cstddef>

namespace FastSIM {

	class FastSIM{

	public:
		FastSIM();

		/**
		 * @brief	Adds the specified Part to fastsim, from now on fastsim will manage
		 *			this part and its memory (and destruction)
		 * @param	part			The part to add (Allocated on HEAP!)
		 * @return	0				OK
		 */
		int							addPart(Part* part);

	#ifndef FRIEND_FASTSIM
	private:
	#endif

		size_t						_next_part_id;
		size_t						_next_pin_id;
		size_t						_next_connection_id;

		std::vector<Part*>			_parts;
		std::vector<Pin*>			_pins;
		std::vector<Connection*>	_connections;

	};

}

#endif
