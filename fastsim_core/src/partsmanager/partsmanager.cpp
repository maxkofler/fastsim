#include "partsmanager.h"

PartsManager::PartsManager(uint32_t maxParts){
    FUN();


    this->_nextGID = 0;
    this->_parts = new Part*[maxParts];
}

PartsManager::~PartsManager(){
    FUN();

    delete this->_parts;
}
