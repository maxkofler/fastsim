
cmake_minimum_required(VERSION 3.5)
project (FastSIM_Core_Tests)

include_directories(../include)

file(GLOB_RECURSE Sources "src/**.cpp")

add_executable(${PROJECT_NAME} ${Sources})
target_link_libraries(${PROJECT_NAME} PUBLIC
    gtest_main
    fastsim_core
)

add_test(
    NAME ${PROJECT_NAME}
    COMMAND ${PROJECT_NAME}
)
