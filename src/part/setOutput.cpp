#include "fastsim/part.h"
#include "fastsim/implementationCommon.h"

bool FastSIM::Part::setOutput(uint8_t id, Pin* pin){
	FUN();
	APICALL("[Part] Setting output #" + std::to_string(id));

	if (id >= this->_count_outputs)
		return false;

	this->_outputs[id] = pin;

	return true;
}
