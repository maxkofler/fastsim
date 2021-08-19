#ifndef __GATE_H__
#define __GATE_H__

class Part;

#include <stdint.h>

#include "log.h"

#include "connection.h"

class Part{

public:
    explicit                                Part(uint32_t global_id, uint8_t input_count, uint8_t output_count);
    void                                    setGID(uint32_t global_id);
    bool                                    setInputCount(uint8_t newCount);
    bool                                    setOutputCount(uint8_t newCount);

    /**
     * @brief   Computes all the inputs and outputs of this part
     *          TIP: Optimize this function, it will get called a lot of times!
     * @return                              0   =   OK
     *                                      1   =   Nothing to do
     *                                      -1  =   Connections not valid
     *                                      -2  =   Internal computation error
     */
    virtual uint8_t                         compute() = 0;

protected:
    uint32_t                                _global_id;

    uint8_t                                 _input_count;
    Connection**                            _inputs;

    uint8_t                                 _output_count;
    Connection**                            _outputs;
    
};

#endif
