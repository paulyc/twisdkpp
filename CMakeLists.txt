cmake_minimum_required (VERSION 3.8)
project (twisdkpp)
add_library(
	twisdk++ 
	SHARED
	src/libmain.cpp
)
find_package(Boost 1.55 REQUIRED)
