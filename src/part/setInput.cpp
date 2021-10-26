#include "part.h"

bool FastSIM::Part::setInput(uint8_t id, Connection *connection){
	this->_inputs.push_back(connection);
	return true;
}
