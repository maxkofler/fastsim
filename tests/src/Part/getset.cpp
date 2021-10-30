#include "part_globals.h"

TEST(Part, SetInput){
	Part part(1, 0);
	Connection input;

	EXPECT_TRUE(part.setInput(0, &input));
	EXPECT_FALSE(part.setInput(1, &input));

	EXPECT_EQ(&input, part._inputs[0]);
}

TEST(Part, SetOutput){
	Part part(0, 1);
	Connection output;

	EXPECT_TRUE(part.setOutput(0, &output));
	EXPECT_FALSE(part.setOutput(1, &output));

	EXPECT_EQ(&output, part._outputs[0]);
}
