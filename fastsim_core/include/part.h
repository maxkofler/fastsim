#ifndef __GATE_H__
#define __GATE_H__

class Part;

#include <stdint.h>

#include "log.h"

#include "connection.h"

#include "exceptions/part_exception.h"

class Part{

public:
    explicit                                Part(   uint32_t global_id,
                                                    uint8_t min_inputs, uint8_t max_inputs, uint8_t input_count,
                                                    uint8_t min_outputs, uint8_t max_outputs, uint8_t output_count);
    
    /**
     * @brief   Sets the global ID of this part
     * @param   global_id                   The new ID
     */
    void                                    setGID(uint32_t global_id);

    /**
     * @brief   Sets the amount of inputs the part has
     * @param   newCount                    The new amount
     */
    bool                                    setInputCount(uint8_t newCount);

    /**
     * @brief   Sets the amount of outputs the part has
     * @param   newCount                    The new amount
     * @return
     */
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

    const uint8_t                           _min_inputs;
    const uint8_t                           _max_inputs;
    uint8_t                                 _input_count;
    Connection**                            _inputs;

    const uint8_t                           _min_outputs;
    const uint8_t                           _max_outputs;
    uint8_t                                 _output_count;
    Connection**                            _outputs;
    
};

#endif
