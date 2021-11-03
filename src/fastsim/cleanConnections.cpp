#include "fastsim/fastsim.h"
#include "fastsim/implementationCommon.h"

int FastSIM::FastSIM::cleanConnections(){
	FUN();
	APICALL("[FastSIM] Cleaning ALL Connections from memory");

	for (Connection* curConnection : this->_connections){
		LOGMEM("[FastSIM] [FastSIM] Deleting Connection #" + std::to_string(curConnection->_connection_id) + "...");
		delete curConnection;
	}

	this->_connections.clear();
	return 0;
}
