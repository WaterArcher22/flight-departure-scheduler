cmake_minimum_required(VERSION 3.30)
project(Fligth_departure_scheduler C)

set(CMAKE_C_STANDARD 99)

add_executable(Fligth_departure_scheduler
        src/main.c
        src/scheduler.c
        src/flight.c
        src/queue.c
)
