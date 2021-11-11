#include "part_globals.h"

#include "fastsim/connection.h"

TEST(Part, DefaultConstructor){
	using namespace FastSIM;
	Part part;
	ASSERT_EQ(1, part._count_inputs);
	ASSERT_EQ(1, part._count_outputs);
}

TEST(Part, SpecificConstructor){
	using namespace FastSIM;
	Part part(2, 4);
	ASSERT_EQ(2, part._count_inputs);
	ASSERT_EQ(4, part._count_outputs);
}
