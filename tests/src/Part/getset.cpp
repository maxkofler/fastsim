#include "globals.h"

#include "part.h"

TEST(Part, SetInput){
	using namespace FastSIM;
	Part part;

	Connection input;

	ASSERT_EQ(0, part._inputs.size());
	ASSERT_TRUE(part.setInput(0, &input));
	ASSERT_EQ(1, part._inputs.size());
	ASSERT_EQ(&input, part._inputs[0]);
}

TEST(Part, SetOutput){
	using namespace FastSIM;
	Part part;

	Connection output;

	ASSERT_EQ(0, part._outputs.size());
	ASSERT_TRUE(part.setOutput(0, &output));
	ASSERT_EQ(1, part._outputs.size());
	ASSERT_EQ(&output, part._outputs[0]);
}
