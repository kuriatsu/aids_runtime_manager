cmake_minimum_required(VERSION 3.0.2)
project(runtime_manager)

# add_compile_options(-std=c++11)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON) # .ui to header

set(CMAKE_CXX_STANDARD 11)

find_package(Qt5 COMPONENTS REQUIRED
  Widgets
  WebEngineWidgets
)

set(QT_LIBRARIES Qt5::Widgets Qt5::WebEngineWidgets)
add_definitions(-DQT_NO_KEYWORDS)

## System dependencies are found with CMake's conventions
# find_package(Boost REQUIRED COMPONENTS system)


## Generate messages in the 'msg' folder
# add_message_files(
#   FILES
#   Message1.msg
#   Message2.msg
# )

## Generate services in the 'srv' folder
# add_service_files(
#   FILES
#   Service1.srv
#   Service2.srv
# )

# generate_messages(
#   DEPENDENCIES
#   std_msgs  # Or other packages containing msgs
# )

catkin_package(
INCLUDE_DIRS include/${PROJECT_NAME}
LIBRARIES 
scenario_check
rotate_image
find_closest_waypoint
#  CATKIN_DEPENDS roscpp
#  DEPENDS system_lib
)

include_directories(
	include/${PROJECT_NAME}
	${catkin_INCLUDE_DIRS}
)

## Declare a C++ library
add_library(scenario_check src/scenario_check.cpp src/scenario_check.ui include/${PROJECT_NAME}/scenario_check.h)
target_link_libraries(scenario_check ${catkin_LIBRARIES} ${QT_LIBRARIES})
# add_dependencies(scenario_check ${catkin_EXPORTED_TARGETS})

add_library(rotate_image src/rotate_image.cpp src/rotate_image.ui include/${PROJECT_NAME}/rotate_image.h)
target_link_libraries(rotate_image ${catkin_LIBRARIES} ${QT_LIBRARIES})

add_library(find_closest_waypoint src/find_closest_waypoint.cpp src/find_closest_waypoint.ui include/${PROJECT_NAME}/find_closest_waypoint.h)
target_link_libraries(find_closest_waypoint ${catkin_LIBRARIES} ${QT_LIBRARIES})

# add_dependencies(${PROJECT_NAME} ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

add_executable(${PROJECT_NAME}_node src/main.cpp src/mainwindow.ui src/mainwindow.cpp include/${PROJECT_NAME}/mainwindow.h)

# set_target_properties(${PROJECT_NAME}_node PROPERTIES OUTPUT_NAME node PREFIX "")

target_link_libraries(${PROJECT_NAME}_node
  ${catkin_LIBRARIES}
  scenario_check
  rotate_image 
  find_closest_waypoint
  ${QT_LIBRARIES}
)
