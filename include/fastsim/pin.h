#ifndef __PIN_H__
#define __PIN_H__

namespace FastSIM{

	/**
	 * @brief The Pin class
	 * This class represents the "glue" between a Connection and a Part
	 * Its only purpose is to represent a wrapper for the boolean value
	*/
	class Pin{

	public:
		Pin();
		Pin(bool state);

		void					setState(bool state);
		bool					getState();

	#ifndef FRIEND_PIN
	private:
	#endif

		bool					_state;

	};

}

#endif
