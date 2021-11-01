#include "fastsim/pin.h"
#include "log.h"

void FastSIM::Pin::setState(bool state){
	FUN();
	this->_state = state;
}
