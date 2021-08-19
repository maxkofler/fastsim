#include "partsmanager.h"

#include "default_parts/and_gate.h"

uint32_t PartsManager::newPart(uint16_t part_id){
    FUN();

    bool partCreated = false;
    std::string gateName;

    switch(part_id){
        case 1: {   //AND
            this->_parts[this->_nextGID] = new AndGate(this->_nextGID);
            gateName = "AND";
            partCreated = true;
            break;
        }
    }

    if (partCreated){
        LOGI("Created new default part: \"" + gateName + "\" with GID: " + std::to_string(this->_nextGID));
        this->_nextGID++;
        return this->_nextGID-1;
    }else{
        return 0;
    }
}
