#include "fastsim/pin.h"
#include "fastsim/implementationCommon.h"

bool FastSIM::Pin::getState(){
	FUN();
	APICALL("[Pin] Getting state: " + std::to_string(this->_state));

	return this->_state;
}
