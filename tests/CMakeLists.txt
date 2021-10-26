
cmake_minimum_required(VERSION 3.5)
project (fastsim_test)

include_directories(../include)
include_directories(./include)

file(GLOB_RECURSE Sources "src/**.cpp")

add_subdirectory(src/Part)
add_subdirectory(src/Connection)