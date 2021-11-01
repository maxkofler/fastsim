cmake_minimum_required (VERSION 3.5)

project(fastsim)

enable_testing()

add_subdirectory(googletest)
add_subdirectory(tests)
add_subdirectory(Log)

include_directories(include Log/include googletest/googletest/include)

file (GLOB_RECURSE libfiles "./src/**.cpp")

add_library(fastsim STATIC ${libfiles})
target_link_libraries(fastsim log)
