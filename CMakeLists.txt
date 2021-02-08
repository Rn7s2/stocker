cmake_minimum_required(VERSION 3.5)

project(stocker LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(wxWidgets COMPONENTS core base richtext ribbon adv)
include("${wxWidgets_USE_FILE}")

add_executable(Stocker mainapp.cpp mainframe.cpp gui.cpp database.cpp
mainapp.h mainframe.h gui.h database.h)
target_link_libraries(Stocker ${wxWidgets_LIBRARIES})
