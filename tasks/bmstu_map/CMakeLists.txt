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
add_subdirectory(tasks/task_map)