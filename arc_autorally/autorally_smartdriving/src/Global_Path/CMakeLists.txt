add_executable(global_plan
               global_plan.cpp)
add_dependencies(global_plan autorally_msgs_gencpp)
target_link_libraries(global_plan ${catkin_LIBRARIES})

install(TARGETS
  global_plan
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
