#include "partsmanager.h"

PartsManager::PartsManager(uint32_t maxParts){
    FUN();


    this->_nextGID = 0;
    this->_gates = new Gate*[maxParts];
}

PartsManager::~PartsManager(){
    FUN();

    delete this->_gates;
}
