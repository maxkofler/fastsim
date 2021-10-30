#include "fastsim/part.h"

bool FastSIM::Part::setOutput(uint8_t id, Connection *connection){
	if (id >= this->_count_outputs)
		return false;

	this->_outputs[id] = connection;

	return true;
}
