add_executable(hello-tests test_hello.cpp)

add_custom_target(
    test $<TARGET_FILE:hello-tests>
    DEPENDS hello-tests
)
