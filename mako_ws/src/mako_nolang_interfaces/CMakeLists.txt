cmake_minimum_required(VERSION 3.5)
project(mako_nolang_interfaces)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/LedControl.srv"
  "srv/ServoControl.srv"
  "srv/ArduinoCommand.srv"
  "srv/TTSCommand.srv"
  "msg/MakoServerMessage.msg"
)

ament_package()
