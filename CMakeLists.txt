cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add subdirectories
add_subdirectory(src/MSF)
add_subdirectory(src/common)

# Create the main executable
add_executable(state_estimation_node src/state_est_node.cpp src/main.cpp)
target_link_libraries(state_estimation_node MSF Common)