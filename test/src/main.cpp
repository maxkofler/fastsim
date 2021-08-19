
#include "fastsim_core.h"
#include "partsmanager.h"
#include "log.h"

#include <iostream>

#include "default_parts/and_gate.h"

Log* hlog;

int main(){
    hlog = new Log(Log::D, false, true);
    FUN();

    AndGate gate (0, 10);

    gate.setInputCount(5);
    gate.setInputCount(2);
    gate.setInputCount(2);

    FastSIM_Core core;

    PartsManager manager(0xFF);

    manager.newPart(PartsManager::AND);

    return 0;
}
