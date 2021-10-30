#include "fastsim/part.h"

FastSIM::Part::Part() :
	Part(1, 1)
{

}

FastSIM::Part::Part(size_t count_inputs, size_t count_outputs) :
	_count_inputs(count_inputs), _count_outputs(count_outputs)
{
	this->_inputs = new Connection*[this->_count_inputs];
	this->_outputs = new Connection*[this->_count_outputs];
}

FastSIM::Part::~Part(){
	delete[] this->_inputs;
	delete[] this->_outputs;
	this->_inputs = nullptr;
	this->_outputs = nullptr;
	this->_count_inputs = 0;
	this->_count_outputs = 0;
}
