#include "fastsim/fastsim.h"
#include "fastsim/implementationCommon.h"

int FastSIM::FastSIM::addPin(Pin *pin){
	FUN();
	APICALL("[FastSIM] Adding Pin #" + std::to_string(this->_next_pin_id));

	pin->_pin_id = this->_next_pin_id;
	this->_next_pin_id++;

	this->_pins.push_back(pin);

	return 0;
}
