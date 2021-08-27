#ifndef __CONNECTION_H__
#define __CONNECTION_H__

class Connection;

#include <vector>

#include "log.h"

#include "part.h"

class Connection{

public:
    
    /**
     * @brief   Adds the supplied part to the vector of parts
     * @param   part                        A pointer to the part to add
     * @return
     */
    bool                                    addPart(Part* part);

    bool                                    getState(){return this->_state;}
    void                                    setState(bool s){this->_state = s;}

private:
    std::vector<Part*>                      _parts_connected;

    bool                                    _state = false;
};

#endif
