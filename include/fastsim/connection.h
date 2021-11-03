#ifndef __CONNECTION_H__
#define __CONNECTION_H__

//For size_t
#include <cstddef>

namespace FastSIM{

    class Connection{

        public:
            Connection();

			friend class FastSIM;
		#ifndef FRIEND_CONNECTION
		private:
		#endif
			size_t					_connection_id;

    };

}

#endif
