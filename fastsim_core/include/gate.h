#ifndef __GATE_H__
#define __GATE_H__

class Gate;

#include <stdint.h>

#include "log.h"

class Gate{

public:
    Gate(uint32_t local_id, uint32_t global_id);

    void                                    setGID(uint32_t global_id);
    void                                    setLID(uint32_t local_id);

protected:
    uint32_t                                _global_id;
    uint32_t                                _local_id;

};

#endif
