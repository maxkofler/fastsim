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
		~FastSIM();

		/**
		 * @brief	Adds the specified Part to fastsim, from now on fastsim will manage
		 *			this Part and its memory (and destruction)
		 * @param	part			The Part to add (Allocated on HEAP!)
		 * @return	0				OK
		 */
		int							addPart(Part* part);

		/**
		 * @brief	Adds the specified Pin to fastsim, from now on fastsim will manage
		 *			this Pin and its memory (and destruction)
		 * @param	pin				The Pin to add (Allocated on HEAP!)
		 * @return	0				OK
		 */
		int							addPin(Pin* pin);

		/**
		 * @brief	Adds the specified Connection to fastsim, from now on fastsim will manage
		 *			this Connection and its memory (and destruction)
		 * @param	connection		The Connection to add (Allocated on HEAP!)
		 * @return	0				OK
		 */
		int							addConnection(Connection* connection);

		/**
		 * @brief	Removes AND DELETES all the Parts FastSIM has registered
		 * @return	0				OK
		 */
		int							cleanParts();

		/**
		 * @brief	Removes AND DELETES all the Pins FastSIM has registered
		 * @return	0				OK
		 */
		int							cleanPins();

		/**
		 * @brief	Removes AND DELETES all the Connections FastSIM has registered
		 * @return	0				OK
		 */
		int							cleanConnections();

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
