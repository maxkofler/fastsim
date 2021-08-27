
#include "fastsim_core.h"
#include "partsmanager.h"
#include "log.h"

#include <iostream>

#include "default_parts/and_gate.h"

Log* hlog;

int main(){
    hlog = new Log(Log::D, false, true);
    FUN();

    Connection ANDin1;
    Connection ANDin2;
    Connection ANDout;
    AndGate gate;
    FastSIM_Core core;

    core.connectInput(&gate, 0, &ANDin1);
    core.connectInput(&gate, 1, &ANDin2);
    core.connectOutput(&gate, 0, &ANDout);

    ANDin1.setState(true);
    ANDin2.setState(true);

    gate.compute();

    LOGI("Status after compute: " + std::to_string(ANDout.getState()));

    return 0;
}
