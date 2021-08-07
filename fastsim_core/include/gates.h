#ifndef __GATES_H__
#define __GATES_H__

class Gates;

#include <stdint.h>

#include "log.h"
#include "gate.h"

class Gates{

public:
    Gates();

    /**
     * @brief Creates a new gate instance, allocates it and initializes it
     * @param global_id                     The GLOBAL id of the gate
     * @return                              A pointer to the newly created gate
     */
    virtual Gate*                           createGate(uint32_t global_id) = 0;

    /**
     * @brief Removes the gate with the specified LOCAL id
     * @param local_id                      The LOCAL id of the gate (index into the array)
     */
    virtual bool                            removeGate(uint32_t local_id) = 0;

    /**
     * @brief Computes ALL the gate operations
     * @return                              0   OK
     *                                      -1  Nothing to do
     *                                      -2  Some gates were not able to be computed (missing inputs)
     */
    virtual uint8_t                         compute() = 0;

protected:
    //This is the array that stores all the gates from this type, this class is responsible for managing them
    Gate**                                  _gates;
};

#endif
