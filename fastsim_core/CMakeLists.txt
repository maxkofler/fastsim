cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(FastSIM_Core)

add_subdirectory(Log/)
include_directories(Log/include)

include_directories(include)

set(SOURCES
    src/fastsim_core.cpp

    src/partsmanager/partsmanager.cpp
)

set(HEADERS
    include/fastsim_core.h
    include/partsmanager.h
    include/gates.h
    include/gate.h
)

add_library(${PROJECT_NAME} ${SOURCES} ${HEADERS})
