message(STATUS "Running tasks/bmstu_list/CMakeLists.txt")
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
get_filename_component(NAME_EXECUTABLE ${CMAKE_CURRENT_SOURCE_DIR} NAME)

#save all folders in tasks with prefix task_ to array
file(GLOB TASKS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/task_*)

foreach (TASK ${TASKS})
    message(STATUS "FIND IN: " ${TASK})
    file(GLOB FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
            ${CMAKE_CURRENT_SOURCE_DIR}/${TASK}/*.[ch]pp
            ${CMAKE_CURRENT_SOURCE_DIR}/${TASK}/*.h
            ${CMAKE_CURRENT_SOURCE_DIR}/${TASK}/*.c
            ${CMAKE_CURRENT_SOURCE_DIR}/${TASK}/*.natvis)
    list(APPEND SOURCES ${FILES})
endforeach ()
message(STATUS "SOURCES: ${SOURCES}")
add_executable(${NAME_EXECUTABLE} ${SOURCES})
target_include_directories(${NAME_EXECUTABLE} PUBLIC ${PROJECT_SOURCE_DIR}/tasks/bmstu_abstract_iterator/task_abstract_iterator)
target_link_libraries(
        ${NAME_EXECUTABLE}
        GTest::gtest_main
)
cmake_minimum_required(VERSION 3.10)
project(bmstu_cpp_course)

# Настройка C++ стандарта
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Включение тестирования
enable_testing()

# Подключаем GoogleTest
find_package(GTest REQUIRED)

# Подключаем поддиректории
add_subdirectory(tasks/optional)