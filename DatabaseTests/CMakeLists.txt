cmake_minimum_required (VERSION 3.15)

project(DatabaseTests)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB SOURCES
	"*.cpp")

include_directories(${DATABASE_IMPL_DIR})

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} ${DATABASE_BIN_DIR}/DatabaseImplementation)