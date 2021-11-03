#include "fastsim/fastsim.h"
#include "fastsim/implementationCommon.h"

int FastSIM::FastSIM::cleanPins(){
	FUN();
	APICALL("[FastSIM] Cleaning ALL Pins from memory");

	for (Pin* curPin : this->_pins){
		LOGMEM("[FastSIM] [FastSIM] Deleting Pin #" + std::to_string(curPin->_pin_id) + "...");
		delete curPin;
	}

	this->_pins.clear();
	return 0;
}
