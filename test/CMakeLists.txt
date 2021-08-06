cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(FastSIM_Core_Test)


add_subdirectory(${PROJECT_SOURCE_DIR}/../fastsim_core fastsim_core)
include_directories(${PROJECT_SOURCE_DIR}/../fastsim_core/include)
include_directories(${PROJECT_SOURCE_DIR}/../fastsim_core/Log/include)
include_directories(include )

set(SOURCES
    src/main.cpp
)

set(HEADERS
)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
target_link_libraries(${PROJECT_NAME} FastSIM_Core log)