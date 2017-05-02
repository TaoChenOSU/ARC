add_executable(lidarDetection
               lidarDetection.cpp)
add_dependencies(lidarDetection autorally_msgs_gencpp)
target_link_libraries(lidarDetection ${catkin_LIBRARIES})

install(TARGETS
  lidarDetection
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
