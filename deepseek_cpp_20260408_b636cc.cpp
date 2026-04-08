message(STATUS "Configuring bmstu_optional")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

get_filename_component(NAME_EXECUTABLE ${CMAKE_CURRENT_SOURCE_DIR} NAME)

# Ищем папку task_optional
file(GLOB TASK_DIR ${CMAKE_CURRENT_SOURCE_DIR}/task_*)

if(NOT TASK_DIR)
    message(FATAL_ERROR "No task_* folder found in ${CMAKE_CURRENT_SOURCE_DIR}")
endif()

# Собираем все .cpp и .h файлы
file(GLOB SOURCES 
    ${TASK_DIR}/*.cpp
    ${TASK_DIR}/*.h
    ${TASK_DIR}/*.hpp
)

message(STATUS "bmstu_optional sources: ${SOURCES}")

# Создаем исполняемый файл
add_executable(${NAME_EXECUTABLE} ${SOURCES})

# Добавляем директорию для include
target_include_directories(${NAME_EXECUTABLE} PRIVATE ${TASK_DIR})

# Подключаем GoogleTest
target_link_libraries(${NAME_EXECUTABLE} PRIVATE GTest::gtest_main)

# Регистрируем тесты
include(GoogleTest)
gtest_discover_tests(${NAME_EXECUTABLE})
