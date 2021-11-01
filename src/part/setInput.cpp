#include "fastsim/part.h"
#include "log.h"

bool FastSIM::Part::setInput(uint8_t id, Pin* pin){
	FUN();
	if (id >= this->_count_inputs)
		return false;

	this->_inputs[id] = pin;

	return true;
}
