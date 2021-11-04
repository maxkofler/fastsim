#ifndef __PIN_H__
#define __PIN_H__

//For size_t
#include <cstddef>

#include <string>

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

		std::string				toString(){return "Pin #" + std::to_string(this->_pin_id);}

		friend class FastSIM;
	#ifndef FRIEND_PIN
	private:
	#endif

		size_t					_pin_id;

		bool					_state;

	};

}

#endif
