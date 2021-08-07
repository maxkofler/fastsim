#include "gate.h"

Gate::Gate(uint32_t local_id, uint32_t global_id){
    FUN();

    this->_local_id = local_id;
    this->_global_id = global_id;
}

void Gate::setLID(uint32_t local_id){
    FUN();

    this->_local_id = local_id;
}

void Gate::setGID(uint32_t global_id){
    FUN();

    this->_global_id = global_id;
}
