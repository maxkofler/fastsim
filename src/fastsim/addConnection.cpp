#include "fastsim/fastsim.h"
#include "fastsim/implementationCommon.h"

int FastSIM::FastSIM::addConnection(Connection *connection){
	FUN();
	APICALL("[FastSIM] Adding Connection #" + std::to_string(this->_next_connection_id));

	connection->_connection_id = this->_next_connection_id;
	this->_next_connection_id++;

	this->_connections.push_back(connection);

	return 0;
}
