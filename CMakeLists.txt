cmake_minimum_required (VERSION 3.5)

project(fastsim)

enable_testing()

add_subdirectory(googletest)
add_subdirectory(tests)

include_directories(include)

include_directories(googletest/googletest/include)

file (GLOB_RECURSE libfiles "./src/**.cpp")

add_library(fastsim STATIC ${libfiles})
