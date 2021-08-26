cmake_minimum_required(VERSION 3.1.0)
project(robot)
set (CMAKE_CXX_STANDARD 20)


add_subdirectory(pybind11)

pybind11_add_module(robot "./pythonApi/robot.cpp")
