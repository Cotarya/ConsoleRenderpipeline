cmake_minimum_required(VERSION 4.0)
project(GameInConsole)

set(CMAKE_CXX_STANDARD 26)

add_executable(GameInConsole main.cpp
        renderpipeline/RenderLib.h
        renderpipeline/ColorEngine.h
        consolecalibration.h
        renderpipeline/examples.h
)
