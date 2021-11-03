#include "fastsim/part.h"
#include "fastsim/implementationCommon.h"

FastSIM::Part::Part() :
	Part(1, 1)
{
	FUN();
}

FastSIM::Part::Part(size_t count_inputs, size_t count_outputs) :
	_count_inputs(count_inputs), _count_outputs(count_outputs)
{
	FUN();
	this->_inputs = new Pin*[this->_count_inputs];
	this->_outputs = new Pin*[this->_count_outputs];
}

FastSIM::Part::~Part(){
	FUN();
	delete[] this->_inputs;
	delete[] this->_outputs;
	this->_inputs = nullptr;
	this->_outputs = nullptr;
	this->_count_inputs = 0;
	this->_count_outputs = 0;
}
