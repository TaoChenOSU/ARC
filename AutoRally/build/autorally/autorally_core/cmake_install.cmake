# Install script for directory: /home/arc/Desktop/AutoRally/src/autorally/autorally_core

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/arc/Desktop/AutoRally/install")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  INCLUDE("/home/arc/Desktop/AutoRally/build/autorally/autorally_core/catkin_generated/safe_execute_install.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/autorally_core" TYPE FILE FILES "/home/arc/Desktop/AutoRally/devel/include/autorally_core/camera_auto_balance_paramsConfig.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/autorally_core" TYPE FILE FILES "/home/arc/Desktop/AutoRally/devel/include/autorally_core/camera_trigger_paramsConfig.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/autorally_core" TYPE FILE FILES "/home/arc/Desktop/AutoRally/devel/lib/python2.7/dist-packages/autorally_core/__init__.py")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/arc/Desktop/AutoRally/devel/lib/python2.7/dist-packages/autorally_core/cfg")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/autorally_core" TYPE DIRECTORY FILES "/home/arc/Desktop/AutoRally/devel/lib/python2.7/dist-packages/autorally_core/cfg")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/arc/Desktop/AutoRally/build/autorally/autorally_core/catkin_generated/installspace/autorally_core.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autorally_core/cmake" TYPE FILE FILES
    "/home/arc/Desktop/AutoRally/build/autorally/autorally_core/catkin_generated/installspace/autorally_coreConfig.cmake"
    "/home/arc/Desktop/AutoRally/build/autorally/autorally_core/catkin_generated/installspace/autorally_coreConfig-version.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autorally_core" TYPE FILE FILES "/home/arc/Desktop/AutoRally/src/autorally/autorally_core/package.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/autorally_core" TYPE PROGRAM FILES
    "/home/arc/Desktop/AutoRally/src/autorally/autorally_core/src/systemStatus/systemStatus.py"
    "/home/arc/Desktop/AutoRally/src/autorally/autorally_core/src/chronyStatus/chronyStatus.py"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autorally_core/launch" TYPE DIRECTORY FILES "/home/arc/Desktop/AutoRally/src/autorally/autorally_core/launch/" FILES_MATCHING REGEX "/[^/]*\\.launch$" REGEX "/[^/]*\\.machine$" REGEX "/[^/]*\\.yaml$" REGEX "/[^/]*\\.urdf$")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/autorally_core" TYPE DIRECTORY FILES "/home/arc/Desktop/AutoRally/src/autorally/autorally_core/include/autorally_core/")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autorally_core" TYPE FILE FILES "/home/arc/Desktop/AutoRally/src/autorally/autorally_core/nodelet_plugins.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/arc/Desktop/AutoRally/build/autorally/autorally_core/src/arduino/cmake_install.cmake")
  INCLUDE("/home/arc/Desktop/AutoRally/build/autorally/autorally_core/src/Diagnostics/cmake_install.cmake")
  INCLUDE("/home/arc/Desktop/AutoRally/build/autorally/autorally_core/src/gps/cmake_install.cmake")
  INCLUDE("/home/arc/Desktop/AutoRally/build/autorally/autorally_core/src/ocs/cmake_install.cmake")
  INCLUDE("/home/arc/Desktop/AutoRally/build/autorally/autorally_core/src/RingBuffer/cmake_install.cmake")
  INCLUDE("/home/arc/Desktop/AutoRally/build/autorally/autorally_core/src/RunStop/cmake_install.cmake")
  INCLUDE("/home/arc/Desktop/AutoRally/build/autorally/autorally_core/src/SerialSensorInterface/cmake_install.cmake")
  INCLUDE("/home/arc/Desktop/AutoRally/build/autorally/autorally_core/src/servoInterface/cmake_install.cmake")
  INCLUDE("/home/arc/Desktop/AutoRally/build/autorally/autorally_core/src/xbee/cmake_install.cmake")
  INCLUDE("/home/arc/Desktop/AutoRally/build/autorally/autorally_core/src/ImageRepublisher/cmake_install.cmake")
  INCLUDE("/home/arc/Desktop/AutoRally/build/autorally/autorally_core/src/StateEstimator/cmake_install.cmake")
  INCLUDE("/home/arc/Desktop/AutoRally/build/autorally/autorally_core/src/autorally_chassis/cmake_install.cmake")
  INCLUDE("/home/arc/Desktop/AutoRally/build/autorally/autorally_core/src/camera_trigger/cmake_install.cmake")
  INCLUDE("/home/arc/Desktop/AutoRally/build/autorally/autorally_core/src/CameraAutoBalance/cmake_install.cmake")
  INCLUDE("/home/arc/Desktop/AutoRally/build/autorally/autorally_core/src/WheelOdometry/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

