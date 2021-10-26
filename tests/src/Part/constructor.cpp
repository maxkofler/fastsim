#include "globals.h"

#include "part.h"
#include "connection.h"

TEST(Part, constructor){
    using namespace FastSIM;
    Part* part;
    part = new Part();
    delete part;
}