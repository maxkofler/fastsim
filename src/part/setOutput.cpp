#include "part.h"

bool FastSIM::Part::setOutput(uint8_t id, Connection *connection){
	this->_outputs.push_back(connection);
	return true;
}
