#include "fastsim_globals.h"
#include "log.h"

TEST(FastSIM, PartsManagement){
	FastSIM::FastSIM fS;

	FastSIM::Part* parts[TEST_COUNT_PARTS];

	{//Add LOADS of Parts
		for(size_t i = 0; i < TEST_COUNT_PARTS; i++){
			parts[i] = new FastSIM::Part(i, i*2);
			fS.addPart(parts[i]);
		}
	}

	{//Check all Parts
		for(size_t i = 0; i < TEST_COUNT_PARTS; i++){
			EXPECT_EQ(fS._parts[i], parts[i]);
		}
	}

	EXPECT_EQ(TEST_COUNT_PARTS, fS._next_part_id);
	EXPECT_EQ(TEST_COUNT_PARTS, fS._parts.size());

	//Clean Parts
	fS.cleanParts();
	EXPECT_EQ(0, fS._parts.size());
}
