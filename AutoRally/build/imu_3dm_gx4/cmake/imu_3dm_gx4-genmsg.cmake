# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "imu_3dm_gx4: 1 messages, 0 services")

set(MSG_I_FLAGS "-Iimu_3dm_gx4:/home/arc/Desktop/AutoRally/src/imu_3dm_gx4/msg;-Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(imu_3dm_gx4_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/imu_3dm_gx4/msg/FilterOutput.msg" NAME_WE)
add_custom_target(_imu_3dm_gx4_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "imu_3dm_gx4" "/home/arc/Desktop/AutoRally/src/imu_3dm_gx4/msg/FilterOutput.msg" "geometry_msgs/Vector3:std_msgs/Header:geometry_msgs/Quaternion"
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(imu_3dm_gx4
  "/home/arc/Desktop/AutoRally/src/imu_3dm_gx4/msg/FilterOutput.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/imu_3dm_gx4
)

### Generating Services

### Generating Module File
_generate_module_cpp(imu_3dm_gx4
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/imu_3dm_gx4
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(imu_3dm_gx4_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(imu_3dm_gx4_generate_messages imu_3dm_gx4_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/imu_3dm_gx4/msg/FilterOutput.msg" NAME_WE)
add_dependencies(imu_3dm_gx4_generate_messages_cpp _imu_3dm_gx4_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(imu_3dm_gx4_gencpp)
add_dependencies(imu_3dm_gx4_gencpp imu_3dm_gx4_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS imu_3dm_gx4_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(imu_3dm_gx4
  "/home/arc/Desktop/AutoRally/src/imu_3dm_gx4/msg/FilterOutput.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/imu_3dm_gx4
)

### Generating Services

### Generating Module File
_generate_module_lisp(imu_3dm_gx4
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/imu_3dm_gx4
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(imu_3dm_gx4_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(imu_3dm_gx4_generate_messages imu_3dm_gx4_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/imu_3dm_gx4/msg/FilterOutput.msg" NAME_WE)
add_dependencies(imu_3dm_gx4_generate_messages_lisp _imu_3dm_gx4_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(imu_3dm_gx4_genlisp)
add_dependencies(imu_3dm_gx4_genlisp imu_3dm_gx4_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS imu_3dm_gx4_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(imu_3dm_gx4
  "/home/arc/Desktop/AutoRally/src/imu_3dm_gx4/msg/FilterOutput.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/imu_3dm_gx4
)

### Generating Services

### Generating Module File
_generate_module_py(imu_3dm_gx4
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/imu_3dm_gx4
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(imu_3dm_gx4_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(imu_3dm_gx4_generate_messages imu_3dm_gx4_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/imu_3dm_gx4/msg/FilterOutput.msg" NAME_WE)
add_dependencies(imu_3dm_gx4_generate_messages_py _imu_3dm_gx4_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(imu_3dm_gx4_genpy)
add_dependencies(imu_3dm_gx4_genpy imu_3dm_gx4_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS imu_3dm_gx4_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/imu_3dm_gx4)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/imu_3dm_gx4
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(imu_3dm_gx4_generate_messages_cpp geometry_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/imu_3dm_gx4)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/imu_3dm_gx4
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(imu_3dm_gx4_generate_messages_lisp geometry_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/imu_3dm_gx4)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/imu_3dm_gx4\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/imu_3dm_gx4
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(imu_3dm_gx4_generate_messages_py geometry_msgs_generate_messages_py)
