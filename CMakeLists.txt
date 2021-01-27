cmake_minimum_required(VERSION 3.5)

project(stocker LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(wxWidgets COMPONENTS core base richtext)
include("${wxWidgets_USE_FILE}")

add_executable(stocker mainapp.cpp mainframe.cpp gui.cpp mainapp.h mainframe.h gui.h)
target_link_libraries(stocker ${wxWidgets_LIBRARIES})
