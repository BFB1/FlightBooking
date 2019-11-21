cmake_minimum_required(VERSION 3.14)
project(FlightBooking)

set(CMAKE_CXX_STANDARD 17)

add_executable(FlightBooking main.cpp FlightBooking.cpp FlightBooking.h Flights.cpp Flights.h)