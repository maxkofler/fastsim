#include "pin_globals.h"

TEST(Pin, DefaultConstructor){
	Pin pin;

	EXPECT_FALSE(pin._state);
}

TEST(Part, SpecificConstructor){
	{
		Pin pin(false);
		EXPECT_FALSE(pin._state);
	}

	{
		Pin pin(true);
		EXPECT_TRUE(pin._state);
	}
}
