cmake_minimum_required (VERSION 3.8)
project (twisdkpp)
add_library(
	twisdk++ 
	SHARED
	src/libmain.cpp
	src/twisdk.cpp
)
include_directories(src)
find_package(Boost 1.55 REQUIRED)
