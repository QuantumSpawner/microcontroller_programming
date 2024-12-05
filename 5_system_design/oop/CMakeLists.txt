cmake_minimum_required(VERSION 3.16)
project(oop C CXX)

include_directories(
        include
)

add_executable(vehicle_c
        src/car.c
        src/vehicle.c

        src/main.c
)

add_executable(vehicle_cpp
        vehicle.cpp
)
