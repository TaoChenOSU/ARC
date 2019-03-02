
(cl:in-package :asdf)

(defsystem "autorally_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :sensor_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "waypoints" :depends-on ("_package_waypoints"))
    (:file "_package_waypoints" :depends-on ("_package"))
    (:file "point2D" :depends-on ("_package_point2D"))
    (:file "_package_point2D" :depends-on ("_package"))
    (:file "runstop" :depends-on ("_package_runstop"))
    (:file "_package_runstop" :depends-on ("_package"))
    (:file "imageMask" :depends-on ("_package_imageMask"))
    (:file "_package_imageMask" :depends-on ("_package"))
    (:file "line2D" :depends-on ("_package_line2D"))
    (:file "_package_line2D" :depends-on ("_package"))
    (:file "wheelSpeeds" :depends-on ("_package_wheelSpeeds"))
    (:file "_package_wheelSpeeds" :depends-on ("_package"))
    (:file "chassisCommand" :depends-on ("_package_chassisCommand"))
    (:file "_package_chassisCommand" :depends-on ("_package"))
    (:file "chassisState" :depends-on ("_package_chassisState"))
    (:file "_package_chassisState" :depends-on ("_package"))
  ))