# Create the MSF library
add_library(MSF sensor.cpp)

# Add subdirectories for the additional MSF libraries
add_subdirectory(MSF_core)
add_subdirectory(MSF_update)

# Link the MSF library with its internal libraries
target_link_libraries(MSF MSFCore MSFUpdate)