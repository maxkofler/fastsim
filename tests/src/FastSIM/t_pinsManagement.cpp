#include "fastsim_globals.h"
#include "log.h"

TEST(FastSIM, PinsManagement){
	FastSIM::FastSIM fS;

	FastSIM::Pin* pins[TEST_COUNT_PINS];

	{//Add LOADS of Pins
		for(size_t i = 0; i < TEST_COUNT_PINS; i++){
			pins[i] = new FastSIM::Pin();
			fS.addPin(pins[i]);
		}
	}

	{//Check all Pins
		for(size_t i = 0; i < TEST_COUNT_PINS; i++){
			EXPECT_EQ(fS._pins[i], pins[i]);
		}
	}

	EXPECT_EQ(TEST_COUNT_PINS, fS._next_pin_id);
	EXPECT_EQ(TEST_COUNT_PINS, fS._pins.size());

	//Clean Pins
	fS.cleanPins();
	EXPECT_EQ(0, fS._pins.size());
}
