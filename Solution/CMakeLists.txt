cmake_minimum_required(VERSION 3.10)

project(sensor_project C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -g")

add_executable(sensor_program
    main.c
    sensor.c
    utils.c
)

target_compile_options(sensor_program PRIVATE -pg)
target_link_options(sensor_program PRIVATE -pg)

find_package(Threads REQUIRED)
target_link_libraries(sensor_program PRIVATE Threads::Threads)
