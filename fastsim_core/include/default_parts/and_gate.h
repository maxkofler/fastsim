#ifndef __AND_GATE_H__
#define __AND_GATE_H__

class AndGate;

#include "log.h"
#include "part.h"

class AndGate : public Part{

public:
    using Part::Part;
    AndGate(uint32_t global_id = 0, uint8_t input_count = 2);

    uint8_t                                 compute();
};

#endif
