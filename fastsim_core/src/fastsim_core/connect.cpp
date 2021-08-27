#include "fastsim_core.h"

bool FastSIM_Core::connectInput(Part* part, uint8_t p_port, Connection* conn){
    FUN();

    return conn->addPart(part) && part->setInput(p_port, conn);
}

bool FastSIM_Core::connectOutput(Part* part, uint8_t p_port, Connection* conn){
    FUN();

    return conn->addPart(part) && part->setOutput(p_port, conn);
}