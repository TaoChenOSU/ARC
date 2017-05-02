add_executable(tf_nav
               tf_nav.cpp)
add_dependencies(tf_nav autorally_msgs_gencpp)
target_link_libraries(tf_nav ${catkin_LIBRARIES})

install(TARGETS
  tf_nav
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
