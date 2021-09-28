cmake_minimum_required(VERSION 3.5)
project(colcon_warnings_example)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_definitions("-Wall")
add_definitions("-Wextra")
add_definitions("-Wpedantic")
add_definitions("-g")
# add_definitions("-O3") # because normal Release build is just -O2

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

## --------------------------------------------------------------
## |                            build                           |
## --------------------------------------------------------------

add_library(example SHARED
  src/example.cpp
  )

ament_target_dependencies(example
  rclcpp
  )

## --------------------------------------------------------------
## |                           install                          |
## --------------------------------------------------------------

install(TARGETS
  example
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

ament_package()

