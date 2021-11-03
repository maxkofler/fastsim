#include "fastsim/pin.h"
#include "fastsim/implementationCommon.h"

void FastSIM::Pin::setState(bool state){
	FUN();
	APICALL("[Pin] Setting state to " + std::to_string(state));

	this->_state = state;
}
