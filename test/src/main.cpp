
#include "fastsim_core.h"
#include "partsmanager.h"
#include "log.h"

#include <iostream>

#include "default_parts/and_gate.h"

Log* hlog;

int main(){
    hlog = new Log(Log::D, false, true);
    FUN();

    FastSIM_Core core;

    PartsManager manager(0xFF);

    AndGate newGate(0xFEDC, 10);

    newGate.getInput(9);

    try{
        newGate.setOutputCount(100);
    }catch(PartException::Exception& e){
        LOGI("Exception: " + std::string(e.what()));
    }

    try{
        newGate.getInput(100);
    }catch(PartException::Exception& e){
        LOGI("Exception: " + std::string(e.what()));
    }
    

    manager.newPart(PartsManager::AND);

    return 0;
}
