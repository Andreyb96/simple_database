cmake_minimum_required (VERSION 3.15)

project(SimpleDatabase)

set(DATABASE_IMPL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/DatabaseImplementation)
set(DATABASE_BIN_DIR ${CMAKE_CURRENT_BINARY_DIR}/DatabaseImplementation/${CMAKE_BUILD_TYPE})

add_subdirectory(DatabaseImplementation)
add_subdirectory(DatabaseRequestApp)
add_subdirectory(DatabaseTests)