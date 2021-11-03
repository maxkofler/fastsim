#include "fastsim/fastsim.h"
#include "fastsim/implementationCommon.h"

int FastSIM::FastSIM::addPart(Part *part){
	FUN();
	APICALL("[FastSIM] Adding Part #" + std::to_string(this->_next_part_id));

	part->_part_id = this->_next_part_id;
	this->_next_part_id++;
	this->_parts.push_back(part);

	return 0;
}
