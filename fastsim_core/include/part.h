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

    uint32_t                                getGID(){return this->_global_id;}

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
     * @brief   Returns a pointer to the requested input connection
     * @param   id                          The id of the input
     * @return  The connection pointer, PartException::Exception on error
     */
    Connection*                             getInput(uint8_t id);

    /**
     * @brief   Returns a pointer to the requested output connection
     * @param   id                          The id of the outxput
     * @return  The connection pointer, PartException::Exception on error
     */
    Connection*                             getOutput(uint8_t id);

    bool                                    setInput(uint8_t id, Connection* c);
    bool                                    setOutput(uint8_t id, Connection* c);

    /**
     * @brief   Computes all the inputs and outputs of this part
     *          TIP: Optimize this function, it will get called a lot of times!
     * @return                              0   =   OK
     *                                      1   =   Nothing to do
     *                                      -1  =   Connections not valid
     *                                      -2  =   Internal computation error
     */
    virtual uint8_t                         compute() = 0;

    friend class                            PartException::Exception;
protected:
    uint32_t                                _global_id;

    const uint8_t                           _min_inputs;
    const uint8_t                           _max_inputs;
    uint8_t                                 _count_inputs;
    Connection**                            _inputs;

    const uint8_t                           _min_outputs;
    const uint8_t                           _max_outputs;
    uint8_t                                 _count_outputs;
    Connection**                            _outputs;

    bool                                    _is_initialized = false;
    
};

#endif
