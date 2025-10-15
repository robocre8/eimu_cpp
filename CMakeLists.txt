cmake_minimum_required(VERSION 3.16)
project(eimu_cpp LANGUAGES CXX)



set(INCLUDE_LIB include/eimu.hpp)
add_executable(read_imu src/read_imu.cpp ${INCLUDE_LIB})
target_include_directories(read_imu PUBLIC include)
target_link_libraries(read_imu serial)


add_executable(comm_speed_test src/comm_speed_test.cpp ${INCLUDE_LIB})
target_include_directories(comm_speed_test PUBLIC include)
target_link_libraries(comm_speed_test serial)