
#include "fastsim_core.h"
#include "log.h"

Log* hlog;

int main(){
    hlog = new Log(Log::A, false, true);
    FUN();

    FastSIM_Core core;

    return 0;
}