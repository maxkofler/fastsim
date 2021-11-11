#ifndef __PIN_H__
#define __PIN_H__

#include "fastsim/fastSimComponent.h"

//For size_t
#include <cstddef>

#include <string>

namespace FastSIM{

	/**
	 * @brief The Pin class
	 * This class represents the "glue" between a Connection and a Part
	 * Its only purpose is to represent a wrapper for the boolean value
	*/
	class Pin : public FastSIMComponent{

	public:
		Pin();
		Pin(bool state);

		/**
		 * @brief Set the boolean state of the Pin
		 * @param state			The state to set the Pin to
		 */
		void					setState(bool state);

		/**
		 * @brief Get the boolean state of the Pin
		 * @return				The state of the Pin
		 */
		bool					getState();

		/**
		 * @return				"Pin #" + ID + " (" + state + ")"
		 */
		std::string				toString();

		int						optimize() override;

		friend class FastSIM;
	#ifndef FRIEND_PIN
	private:
	#endif

		size_t					_pin_id;

		bool					_state;

	};

}

#endif
