#include "part_globals.h"

#include <gtest/gtest.h>

TEST(Part, Destructor){
	Part* part = new Part();

	delete part;
}
