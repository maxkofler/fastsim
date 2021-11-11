#include "fastsim/connection.h"
#include "log.h"

FastSIM::Connection::Connection(){
	FUN();

	this->_o_sizePins = 0;
	this->_o_pins = nullptr;
}

FastSIM::Connection::~Connection(){
	FUN();

	if (this->_o_pins != nullptr)
		delete[] this->_o_pins;
}
