cmake_minimum_required(VERSION 3.20)
#project(custom)

add_library(custom)
#target_compile_options(custom PRIVATE -Wall -Wextra -mthumb -mcpu=cortex-m33)
#set_target_properties(custom PROPERTIES C_STANDARD 11)

zephyr_get_include_directories_for_lang_as_string(       C includes)
zephyr_get_system_include_directories_for_lang_as_string(C system_includes)
zephyr_get_compile_definitions_for_lang_as_string(       C definitions)
zephyr_get_compile_options_for_lang_as_string(           C options)

if(DEFINED CMAKE_C_COMPILER_TARGET)
  set(target_flag "--target=${CMAKE_C_COMPILER_TARGET}")
endif()
message(external_project_cflags="${definitions} ${options}")

target_include_directories(custom PUBLIC include)
add_subdirectory(src)