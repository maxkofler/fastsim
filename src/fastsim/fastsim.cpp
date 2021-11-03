#include "fastsim/fastsim.h"
#include "fastsim/implementationCommon.h"

FastSIM::FastSIM::FastSIM() :
	_next_part_id(0), _next_pin_id(0), _next_connection_id(0)
{
	FUN();

}

FastSIM::FastSIM::~FastSIM(){
	FUN();

	this->cleanParts();
}
