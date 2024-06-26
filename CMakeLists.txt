cmake_minimum_required(VERSION 3.27)
project(rvmcalc C)

set(CMAKE_C_STANDARD 11)

add_executable(rvmcalc
        src/main.c)

add_library(rvm_lib STATIC rvm/src/lib/stack.c
        rvm/src/lib/buffer.c
        rvm/src/lib/headers/buffer.h
        rvm/src/lib/vm.c
        rvm/src/lib/headers/vm.h
        rvm/src/lib/symbol_table.c
        rvm/src/lib/headers/symbol_table.h)

set_target_properties(rvm_lib PROPERTIES OUTPUT_NAME "rvm")

target_include_directories(rvm_lib PUBLIC src/lib/headers)

target_link_libraries(rvmcalc rvm_lib)