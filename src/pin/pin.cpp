#include "fastsim/pin.h"
#include "log.h"

FastSIM::Pin::Pin() :
	Pin(false)
{
	FUN();
}

FastSIM::Pin::Pin(bool state) :
	_state(state)
{
	FUN();
}
