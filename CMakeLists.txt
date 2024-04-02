cmake_minimum_required(VERSION 3.19)

#Create CMake project
project(detectvm VERSION 1.0)

#Add all C++ files from src directory to compilation
file(GLOB sc "src/*.cpp")

add_executable(detectvm ${sc})