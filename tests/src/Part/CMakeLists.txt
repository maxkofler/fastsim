
set(TEST_NAME Part)

file(GLOB_RECURSE sources "./**.cpp")

add_executable(${TEST_NAME} ${sources})

target_link_libraries(${TEST_NAME} PUBLIC
    gtest_main
    fastsim
)

add_test(
    NAME ${TEST_NAME}
    COMMAND ${TEST_NAME}
)
