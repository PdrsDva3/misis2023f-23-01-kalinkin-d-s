add_library(complex complex.cpp complex.h)

add_executable(test_complex test_complex.cpp)

target_link_libraries(test_complex complex)
#add_executable(complex complex.cpp)