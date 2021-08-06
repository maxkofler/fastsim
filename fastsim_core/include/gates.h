#ifndef __GATES_H__
#define __GATES_H__

class Gates;

#include "log.h"
#include "gate.h"

class Gates{

public:
    Gates();

    virtual Gate*                           createGate(uint32_t id) = 0;
};

#endif
