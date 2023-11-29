add_library(complex complex/complex.cpp complex/complex.h)

add_executable(test_complex test_complex/test_complex.cpp)

target_link_libraries(test_complex complex)


add_executable(rational rational/rational.cpp)