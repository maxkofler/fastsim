#include "fastsim/pin.h"
#include "log.h"

bool FastSIM::Pin::getState(){
	FUN();
	return this->_state;
}
