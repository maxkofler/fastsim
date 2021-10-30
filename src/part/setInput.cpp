#include "fastsim/part.h"

bool FastSIM::Part::setInput(uint8_t id, Connection *connection){
	if (id >= this->_count_inputs)
		return false;

	this->_inputs[id] = connection;

	return true;
}
