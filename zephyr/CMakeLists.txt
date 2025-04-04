if(CONFIG_LIBCUSTOM)
  zephyr_library_named(custom)
  zephyr_include_directories(../include)

  #add_subdirectory(.. build)
  #set_property(GLOBAL APPEND PROPERTY ZEPHYR_INTERFACE_LIBS custom)

endif()