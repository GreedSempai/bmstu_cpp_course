cmake_minimum_required(VERSION 3.15)
project(bmstu_optional LANGUAGES CXX)

message(STATUS "Running tasks/bmstu_optional/CMakeLists.txt")

# Set C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Get executable name from directory name
get_filename_component(NAME_EXECUTABLE ${CMAKE_CURRENT_SOURCE_DIR} NAME)

# Collect source files from current directory
file(GLOB SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/*.natvis
)

# If no sources found in current directory, try to find in subdirectories
if(NOT SOURCES)
    message(STATUS "No sources found in current directory, searching subdirectories...")
    
    # Find all task directories
    file(GLOB TASK_DIRS 
        LIST_DIRECTORIES true
        ${CMAKE_CURRENT_SOURCE_DIR}/task_*
    )
    
    foreach(TASK_DIR ${TASK_DIRS})
        if(IS_DIRECTORY ${TASK_DIR})
            message(STATUS "Processing directory: ${TASK_DIR}")
            
            file(GLOB TASK_SOURCES 
                ${TASK_DIR}/*.cpp
                ${TASK_DIR}/*.hpp
                ${TASK_DIR}/*.h
                ${TASK_DIR}/*.natvis
            )
            
            list(APPEND SOURCES ${TASK_SOURCES})
        endif()
    endforeach()
endif()

# If still no sources, use the files we know exist
if(NOT SOURCES)
    message(STATUS "No sources found via GLOB, using hardcoded file list")
    set(SOURCES 
        ${CMAKE_CURRENT_SOURCE_DIR}/bmstu_optional_test.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/bmstu_optional.h
    )
endif()

# Check if sources exist
foreach(SOURCE_FILE ${SOURCES})
    if(NOT EXISTS ${SOURCE_FILE})
        message(WARNING "Source file does not exist: ${SOURCE_FILE}")
    else()
        message(STATUS "Found source: ${SOURCE_FILE}")
    endif()
endforeach()

list(LENGTH SOURCES SOURCES_COUNT)
message(STATUS "Number of source files: ${SOURCES_COUNT}")

if(SOURCES_COUNT EQUAL 0)
    message(FATAL_ERROR "No source files found for target ${NAME_EXECUTABLE}")
endif()

# Create executable
add_executable(${NAME_EXECUTABLE} ${SOURCES})

# Set include directories
target_include_directories(${NAME_EXECUTABLE} 
    PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Set compiler options
if(MSVC)
    target_compile_options(${NAME_EXECUTABLE} PRIVATE /W4)
else()
    target_compile_options(${NAME_EXECUTABLE} PRIVATE -Wall -Wextra -Wpedantic)
endif()

# Link dependencies
find_package(GTest REQUIRED)
target_link_libraries(${NAME_EXECUTABLE} 
    PRIVATE 
    GTest::gtest_main
)

# Enable testing
enable_testing()
add_test(NAME ${NAME_EXECUTABLE}_tests COMMAND ${NAME_EXECUTABLE})

# Print summary
message(STATUS "Configured executable: ${NAME_EXECUTABLE}")
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")