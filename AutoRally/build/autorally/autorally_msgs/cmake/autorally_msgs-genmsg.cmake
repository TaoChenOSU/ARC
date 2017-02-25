# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "autorally_msgs: 8 messages, 0 services")

set(MSG_I_FLAGS "-Iautorally_msgs:/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/indigo/share/sensor_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg;-Idiagnostic_msgs:/opt/ros/indigo/share/diagnostic_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(autorally_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/waypoints.msg" NAME_WE)
add_custom_target(_autorally_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "autorally_msgs" "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/waypoints.msg" "std_msgs/Header:geometry_msgs/Point"
)

get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/point2D.msg" NAME_WE)
add_custom_target(_autorally_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "autorally_msgs" "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/point2D.msg" ""
)

get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/chassisState.msg" NAME_WE)
add_custom_target(_autorally_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "autorally_msgs" "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/chassisState.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/chassisCommand.msg" NAME_WE)
add_custom_target(_autorally_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "autorally_msgs" "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/chassisCommand.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/imageMask.msg" NAME_WE)
add_custom_target(_autorally_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "autorally_msgs" "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/imageMask.msg" "autorally_msgs/line2D:autorally_msgs/point2D:std_msgs/Header:sensor_msgs/RegionOfInterest"
)

get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/wheelSpeeds.msg" NAME_WE)
add_custom_target(_autorally_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "autorally_msgs" "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/wheelSpeeds.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/runstop.msg" NAME_WE)
add_custom_target(_autorally_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "autorally_msgs" "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/runstop.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/line2D.msg" NAME_WE)
add_custom_target(_autorally_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "autorally_msgs" "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/line2D.msg" "autorally_msgs/point2D"
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/waypoints.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/autorally_msgs
)
_generate_msg_cpp(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/point2D.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/autorally_msgs
)
_generate_msg_cpp(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/chassisState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/autorally_msgs
)
_generate_msg_cpp(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/chassisCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/autorally_msgs
)
_generate_msg_cpp(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/imageMask.msg"
  "${MSG_I_FLAGS}"
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/line2D.msg;/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/point2D.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/sensor_msgs/cmake/../msg/RegionOfInterest.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/autorally_msgs
)
_generate_msg_cpp(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/wheelSpeeds.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/autorally_msgs
)
_generate_msg_cpp(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/runstop.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/autorally_msgs
)
_generate_msg_cpp(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/line2D.msg"
  "${MSG_I_FLAGS}"
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/point2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/autorally_msgs
)

### Generating Services

### Generating Module File
_generate_module_cpp(autorally_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/autorally_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(autorally_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(autorally_msgs_generate_messages autorally_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/waypoints.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_cpp _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/point2D.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_cpp _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/chassisState.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_cpp _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/chassisCommand.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_cpp _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/imageMask.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_cpp _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/wheelSpeeds.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_cpp _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/runstop.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_cpp _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/line2D.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_cpp _autorally_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(autorally_msgs_gencpp)
add_dependencies(autorally_msgs_gencpp autorally_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS autorally_msgs_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/waypoints.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/autorally_msgs
)
_generate_msg_lisp(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/point2D.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/autorally_msgs
)
_generate_msg_lisp(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/chassisState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/autorally_msgs
)
_generate_msg_lisp(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/chassisCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/autorally_msgs
)
_generate_msg_lisp(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/imageMask.msg"
  "${MSG_I_FLAGS}"
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/line2D.msg;/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/point2D.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/sensor_msgs/cmake/../msg/RegionOfInterest.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/autorally_msgs
)
_generate_msg_lisp(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/wheelSpeeds.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/autorally_msgs
)
_generate_msg_lisp(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/runstop.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/autorally_msgs
)
_generate_msg_lisp(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/line2D.msg"
  "${MSG_I_FLAGS}"
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/point2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/autorally_msgs
)

### Generating Services

### Generating Module File
_generate_module_lisp(autorally_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/autorally_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(autorally_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(autorally_msgs_generate_messages autorally_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/waypoints.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_lisp _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/point2D.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_lisp _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/chassisState.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_lisp _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/chassisCommand.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_lisp _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/imageMask.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_lisp _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/wheelSpeeds.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_lisp _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/runstop.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_lisp _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/line2D.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_lisp _autorally_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(autorally_msgs_genlisp)
add_dependencies(autorally_msgs_genlisp autorally_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS autorally_msgs_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/waypoints.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/autorally_msgs
)
_generate_msg_py(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/point2D.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/autorally_msgs
)
_generate_msg_py(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/chassisState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/autorally_msgs
)
_generate_msg_py(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/chassisCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/autorally_msgs
)
_generate_msg_py(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/imageMask.msg"
  "${MSG_I_FLAGS}"
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/line2D.msg;/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/point2D.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/sensor_msgs/cmake/../msg/RegionOfInterest.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/autorally_msgs
)
_generate_msg_py(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/wheelSpeeds.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/autorally_msgs
)
_generate_msg_py(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/runstop.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/autorally_msgs
)
_generate_msg_py(autorally_msgs
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/line2D.msg"
  "${MSG_I_FLAGS}"
  "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/point2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/autorally_msgs
)

### Generating Services

### Generating Module File
_generate_module_py(autorally_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/autorally_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(autorally_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(autorally_msgs_generate_messages autorally_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/waypoints.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_py _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/point2D.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_py _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/chassisState.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_py _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/chassisCommand.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_py _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/imageMask.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_py _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/wheelSpeeds.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_py _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/runstop.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_py _autorally_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg/line2D.msg" NAME_WE)
add_dependencies(autorally_msgs_generate_messages_py _autorally_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(autorally_msgs_genpy)
add_dependencies(autorally_msgs_genpy autorally_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS autorally_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/autorally_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/autorally_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(autorally_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
add_dependencies(autorally_msgs_generate_messages_cpp sensor_msgs_generate_messages_cpp)
add_dependencies(autorally_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
add_dependencies(autorally_msgs_generate_messages_cpp diagnostic_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/autorally_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/autorally_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(autorally_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)
add_dependencies(autorally_msgs_generate_messages_lisp sensor_msgs_generate_messages_lisp)
add_dependencies(autorally_msgs_generate_messages_lisp geometry_msgs_generate_messages_lisp)
add_dependencies(autorally_msgs_generate_messages_lisp diagnostic_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/autorally_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/autorally_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/autorally_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(autorally_msgs_generate_messages_py std_msgs_generate_messages_py)
add_dependencies(autorally_msgs_generate_messages_py sensor_msgs_generate_messages_py)
add_dependencies(autorally_msgs_generate_messages_py geometry_msgs_generate_messages_py)
add_dependencies(autorally_msgs_generate_messages_py diagnostic_msgs_generate_messages_py)
