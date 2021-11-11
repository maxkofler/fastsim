#ifndef __FASTSIMCOMPONENT_H__
#define __FASTSIMCOMPONENT_H__

namespace FastSIM {

	class FastSIMComponent{
	public:

		/**
		 * @brief Optimizes the contents of the Component for simulation
		 * @return
		 */
		virtual int				optimize() = 0;

		friend class FastSIM;
	#ifndef FRIEND_FASTSIMCOMPONENT
	protected:
	#endif

		/**
		 * @brief If the contents of the Component are currently optimized for simulation
		 */
		bool					_is_optimized;
	};

}

#endif
