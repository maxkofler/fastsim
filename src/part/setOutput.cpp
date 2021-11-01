#include "fastsim/part.h"
#include "log.h"

bool FastSIM::Part::setOutput(uint8_t id, Pin* pin){
	FUN();
	if (id >= this->_count_outputs)
		return false;

	this->_outputs[id] = pin;

	return true;
}
