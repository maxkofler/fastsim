#include "fastsim/part.h"
#include "fastsim/implementationCommon.h"

bool FastSIM::Part::setInput(uint8_t id, Pin* pin){
	FUN();
	APICALL("[Part] Setting input #" + std::to_string(id));

	if (id >= this->_count_inputs)
		return false;

	this->_inputs[id] = pin;

	return true;
}
