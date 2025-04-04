cmake_minimum_required(VERSION 3.20)
#project(custom)

add_library(custom)
target_compile_options(custom PRIVATE -Wall -Wextra -mthumb -mcpu=cortex-m33)
set_target_properties(custom PROPERTIES C_STANDARD 11)

target_include_directories(custom PUBLIC include)
add_subdirectory(src)