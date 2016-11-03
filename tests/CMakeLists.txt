cmake_minimum_required(VERSION 2.6)

include_directories(../include)
include_directories(../gtest)

file(GLOB headers "*.h*")
file(GLOB sources "*.cpp")
file(GLOB libraries "../lib/*.a")

if(UNIX == true)
	add_executable(../bin/test_app ${sources} ${headers})
	target_link_libraries(../bin/test_app ${libraries} -pthread)
else(UNIX)
	add_executable(test_app ${sources} ${headers})
	target_link_libraries(test_app ${libraries})
endif(UNIX)

