cmake_minimum_required(VERSION 3.16)

project(Campus_Management LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Campus_Management main.cpp
    studentdatabase.h studentdatabase.cpp
    studentreport.h studentreport.cpp)

include(GNUInstallDirs)
install(TARGETS Campus_Management
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
