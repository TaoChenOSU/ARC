add_executable(odom
               odom.cpp)
add_dependencies(odom autorally_msgs_gencpp)
target_link_libraries(odom ${catkin_LIBRARIES})

install(TARGETS
  odom
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
