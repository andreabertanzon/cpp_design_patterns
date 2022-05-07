cmake_minimum_required(VERSION 3.22)
project(design_patterns)

set(CMAKE_CXX_STANDARD 17)

add_executable(design_patterns main.cpp Headers/observer_headers/Subject.h Headers/observer_headers/Observer.h src/observer_example/DisplayElement.h src/observer_example/WeatherData.cpp src/observer_example/WeatherData.h)
