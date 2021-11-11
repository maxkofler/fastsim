#include "fastsim/connection.h"
#include "fastsim/implementationCommon.h"

int FastSIM::Connection::connect(Pin *pin){
	FUN();

	if(pin == nullptr)
		return -1;

	APICALL("[Connection] Connecting " + pin->toString());

	for(Pin* curPin : this->_pins)
		if(curPin == pin){
			LOGE("[FastSIM] [Connection] " + pin->toString() + " is already connected");
			return -2;
		}

	this->_pins.push_back(pin);

	this->_is_optimized = false;
	return 0;
}
