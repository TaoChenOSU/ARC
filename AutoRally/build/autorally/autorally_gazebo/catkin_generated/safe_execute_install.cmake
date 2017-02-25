execute_process(COMMAND "/home/arc/Desktop/AutoRally/build/autorally/autorally_gazebo/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/arc/Desktop/AutoRally/build/autorally/autorally_gazebo/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
