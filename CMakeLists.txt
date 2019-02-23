cmake_minimum_required (VERSION 3.8)
project (twisdkpp)
set (CMAKE_CXX_STANDARD 11)
add_library(
	twisdk++ 
	SHARED
	src/twisdk.cpp
	src/twisdk.hpp
	src/twisdkPriv.hpp
	src/httpserver.cpp
	src/httpserver.hpp
)
include_directories(src)
find_package(Boost 1.66 REQUIRED)
