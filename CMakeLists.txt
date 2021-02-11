cmake_minimum_required(VERSION 3.5)

project(stocker LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(wxWidgets COMPONENTS core base richtext ribbon adv)
include("${wxWidgets_USE_FILE}")

add_executable(Stocker mainapp.cpp mainframe.cpp gui.cpp database.cpp
    searchdialog.cpp mainapp.h mainframe.h gui.h database.h searchdialog.h
    addexisteddialog.cpp addexisteddialog.h addnewdialog.cpp addnewdialog.h stockoutdialog.cpp stockoutdialog.h detaildialog.cpp detaildialog.h modifydialog.cpp modifydialog.h)
target_link_libraries(Stocker ${wxWidgets_LIBRARIES})
