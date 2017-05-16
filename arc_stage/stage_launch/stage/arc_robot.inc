define laser ranger
(
  sensor
  (
    range_max 6
    fov 360
    samples 2000
  )

  color "black"
  size [ 0.06 0.15 0.03]
)

define leddar ranger
(
  sensor
  (
    range_max 50.0
    fov 45
    samples 16
  )
  color "black"
  size [0.06 0.15 0.03]
)

define carlike_robot position
(
  pose [ 0.0 0.0 0.0 0.0 ]

  odom_error [ 0.03 0.03 999999 999999 999999 0.02 ]

  size [ 0.56 0.46 0.4 ]
  origin [ 0.2 0.0 0.0 0.0]
  gui_nose 1
  color "green"

  drive "car"
  localization "gps"
  wheelbase 0.38

  #laser(pose [-0.1 0.0 -0.11 0.0])
  laser(pose [0.1 0.0 -0.11 0.0])

  leddar(pose [0.2 0.0 -0.11 0.0])
)
