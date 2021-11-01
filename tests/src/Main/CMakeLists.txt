
set(TEST_NAME main_tests)

file(GLOB_RECURSE sources "./**.cpp")

add_library(${TEST_NAME} STATIC ${sources})

target_link_libraries(${TEST_NAME} PUBLIC
    gtest
    fastsim
)

#add_test(
#    NAME ${TEST_NAME}
#    COMMAND ${TEST_NAME}
#)
