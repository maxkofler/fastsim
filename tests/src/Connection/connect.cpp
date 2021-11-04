#include "connection_globals.h"

#include "fastsim/pin.h"

TEST(Connection, Connect){
	Connection connection;
	Pin pin;

	EXPECT_EQ(-1, connection.connect(nullptr));
	EXPECT_EQ(0, connection.connect(&pin));
	EXPECT_EQ(-2, connection.connect(&pin));
}
