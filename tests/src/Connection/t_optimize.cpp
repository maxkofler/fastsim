#include "connection_globals.h"

TEST(Connection, optimize){
	Connection connection;

	ASSERT_FALSE(connection._is_optimized);

	ASSERT_EQ(0, connection.optimize());

	ASSERT_TRUE(connection._is_optimized);
}
