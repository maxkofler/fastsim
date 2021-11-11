#include "fastsim/implementationCommon.h"
#include "fastsim/connection.h"

int FastSIM::Connection::optimize(){
	FUN();

	if (this->_is_optimized)
		return 0;

	APICALL("[Connection] Optimizing...");

	{//Optimize pins
		LOGD("[FastSIM] [Connection] Optimizing Pins...");
		{//Check if the Pin* array is populated, if yes delete it
			if (this->_o_pins != nullptr){
				delete[] this->_o_pins;
				this->_o_pins = nullptr;
			}
		}

		{//Create the Pin* array and populate it
			this->_o_sizePins = this->_pins.size();
			this->_o_pins = new Pin*[this->_o_sizePins];

			for (int i = 0; i < this->_o_sizePins; i++){
				this->_o_pins[i] = this->_pins.at(i);
			}
		}
	}

	this->_is_optimized = true;
	return this->_o_sizePins;
}
