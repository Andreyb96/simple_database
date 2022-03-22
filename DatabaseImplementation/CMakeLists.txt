cmake_minimum_required (VERSION 3.15)

project(DatabaseImplementation)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB SOURCES
	"*.cpp")

file(GLOB HEADERS
	"*.h")

add_library(${PROJECT_NAME} STATIC ${SOURCES} ${HEADERS})
