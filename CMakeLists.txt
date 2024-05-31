cmake_minimum_required(VERSION 3.29.3 ) # version off cmake
project(refaat)
set(CMAKE_C_COMPILER "g++")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} wall werr" )
file(GLOB LIB_SOURCES lib/*.cpp  )  #to make LIB_SOURCES=lib/main.cpp  lib./fsd.cpp
set(SOURCE src/app.cpp)           #SOURCE= src/fsa.cpp
add_library(mylib STATIC ${LIB_SOURCES})
target_include_directories(mylib PUBLIC  inc/) # if you did not found .h search in inc/
add_executable(app ${SOURCE})
target_link_libraries(app PRIVATE mylib)
#install(TARGETS app DESTINATION "${CMAKE_BINARY_DIR}/build/bin")
#execute_process(COMMAND echo " hellow refaat")
#add_custom_target(run COMMAND touch info.txt
 #             COMMAND stat APP | cat >info.txt )#//if wrote cmake run will implement that