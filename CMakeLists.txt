#define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

#name the project and some other stuff
project(
	ft
	DESCRIPTION "recoding standard libc"
	HOMEPAGE_URL "https://github.com/kurz-m/Libft"
	VERSION 0.2
	LANGUAGES C
)

#export compile commands into a .json file
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#set cmake source directory to current directory
set(CMAKE_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

#add compile flags
set(CMAKE_C_FLAGS "-Wall -Werror -Wextra -march=native")

add_library(${PROJECT_NAME} STATIC)

add_subdirectory(array)
add_subdirectory(ctype)
add_subdirectory(gnl)
add_subdirectory(io)
add_subdirectory(list)
add_subdirectory(printf)
add_subdirectory(string)

target_include_directories(${PROJECT_NAME} PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/array
	${CMAKE_CURRENT_SOURCE_DIR}/ctype
	${CMAKE_CURRENT_SOURCE_DIR}/gnl
	${CMAKE_CURRENT_SOURCE_DIR}/io
	${CMAKE_CURRENT_SOURCE_DIR}/list
	${CMAKE_CURRENT_SOURCE_DIR}/printf
	${CMAKE_CURRENT_SOURCE_DIR}/string
)
