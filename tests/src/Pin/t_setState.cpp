#include "pin_globals.h"

TEST(Pin, setState){
	Pin pin;

	pin.setState(true);
	EXPECT_TRUE(pin._state);

	pin.setState(false);
	EXPECT_FALSE(pin._state);
}
