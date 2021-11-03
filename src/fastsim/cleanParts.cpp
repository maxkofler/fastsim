#include "fastsim/fastsim.h"
#include "fastsim/implementationCommon.h"

int FastSIM::FastSIM::cleanParts(){
	FUN();
	APICALL("[FastSIM] Cleaning ALL Parts from memory");

	for (Part* curPart : this->_parts){
		LOGMEM("[FastSIM] [FastSIM] Deleting Part #" + std::to_string(curPart->_part_id) + "...");
		delete curPart;
	}

	this->_parts.clear();
	return 0;
}
