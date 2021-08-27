#ifndef __FASTSIM_CORE_H__
#define __FASTSIM_CORE_H__

class FastSIM_Core;

#include "log.h"

#include "part.h"
#include "connection.h"

class FastSIM_Core{

public:
    FastSIM_Core();

    bool                                    connectInput(
                                                Part* part,
                                                uint8_t part_port,
                                                Connection* connection);

    bool                                    connectOutput(
                                                Part* part,
                                                uint8_t part_port,
                                                Connection* connection);
    
private:
    
};

#endif
