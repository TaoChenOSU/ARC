add_executable(imuConverter imuConverter.cpp)
add_dependencies(imuConverter autorally_msgs_gen.cpp)
target_link_libraries(imuConverter ${catkin_LIBRARIES} ${Boost_INCLUDE_DIR})

install(TARGETS imuConverter
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
