#include "fastsim_globals.h"
#include "log.h"

TEST(FastSIM, ConnectionsManagement){
	FastSIM::FastSIM fS;

	FastSIM::Connection* connections[TEST_COUNT_CONNECTIONS];

	{//Add LOADS of Connections
		for(size_t i = 0; i < TEST_COUNT_CONNECTIONS; i++){
			connections[i] = new FastSIM::Connection();
			fS.addConnection(connections[i]);
		}
	}

	{//Check all Connections
		for(size_t i = 0; i < TEST_COUNT_CONNECTIONS; i++){
			EXPECT_EQ(fS._connections[i], connections[i]);
		}
	}

	EXPECT_EQ(TEST_COUNT_CONNECTIONS, fS._next_connection_id);
	EXPECT_EQ(TEST_COUNT_CONNECTIONS, fS._connections.size());

	//Clean Connections
	fS.cleanConnections();
	EXPECT_EQ(0, fS._connections.size());
}
