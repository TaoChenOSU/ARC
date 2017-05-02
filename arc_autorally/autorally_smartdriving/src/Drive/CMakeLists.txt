add_executable(drive
               drive.cpp)
add_dependencies(drive autorally_msgs_gencpp)
target_link_libraries(drive ${catkin_LIBRARIES})

install(TARGETS
  drive
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
