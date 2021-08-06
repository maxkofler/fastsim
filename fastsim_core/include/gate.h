#ifndef __GATE_H__
#define __GATE_H__

class Gate;

#include "log.h"

class Gate{

public:
    Gate();
    Gate(uint32_t id);

protected:
    uint32_t                                _id;

};

#endif
