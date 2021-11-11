#include "fastsim/implementationCommon.h"
#include "fastsim/pin.h"

std::string FastSIM::Pin::toString(){
	FUN();

	return "Pin #" + std::to_string(this->_pin_id) + " (" + std::to_string(this->_state) + ")";
}
