#include "fastsim/fastsim.h"
#include "fastsim/implementationCommon.h"

int FastSIM::FastSIM::cleanPins(){
	FUN();
	APICALL("[FastSIM] Cleaning ALL Pins from memory");

	for (Pin* curPin : this->_pins){
		LOGMEM("[FastSIM] [FastSIM] Deleting " + curPin->toString() + "...");
		delete curPin;
	}

	this->_pins.clear();
	return 0;
}
