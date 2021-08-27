#include "connection.h"

bool Connection::addPart(Part* part){
    FUN();

    //Check for duplicates
    for (size_t i = 0; i < this->_parts_connected.size(); i++){
        if (this->_parts_connected.at(i) == part)
            return true;
    }

    this->_parts_connected.push_back(part);

    return true;
}