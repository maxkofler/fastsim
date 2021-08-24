
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

    manager.newPart(PartsManager::AND);

    return 0;
}
