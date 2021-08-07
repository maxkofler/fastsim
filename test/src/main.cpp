
#include "fastsim_core.h"
#include "partsmanager.h"
#include "log.h"

#include <iostream>

Log* hlog;

int main(){
    hlog = new Log(Log::A, false, true);
    FUN();

    FastSIM_Core core;

    PartsManager manager(0xFF);

    return 0;
}
