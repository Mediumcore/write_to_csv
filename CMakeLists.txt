cmake_minimum_required(VERSION 2.8.3)
project(write_csv)

find_package(Eigen3 REQUIRED)

include_directories(
  ${EIGEN3_INCLUDE_DIR} 
)

add_executable(write_csv write_csv.cpp utils.c)

target_link_libraries(write_csv
  ${EIGEN3_LIBRARIES}
  ${Boost_LIBRARIES}
)