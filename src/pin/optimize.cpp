#include "fastsim/implementationCommon.h"
#include "fastsim/pin.h"

int FastSIM::Pin::optimize(){
	FUN();

	this->_is_optimized = true;

	return 0;
}
