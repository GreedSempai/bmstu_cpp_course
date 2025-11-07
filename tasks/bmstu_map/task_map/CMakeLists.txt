cmake_minimum_required(VERSION 3.10)
project(bmstu_map_test)

# Настройка C++ стандарта
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Поиск GoogleTest
find_package(GTest REQUIRED)

# Создаем исполняемый файл напрямую (без библиотеки)
add_executable(bmstu_map_test
    bmstu_map_test.cpp
    bmstu_map.h
)

# Линкуем с GTest
target_link_libraries(bmstu_map_test
    GTest::GTest
    GTest::Main
)

# Устанавливаем выходную директорию
set_target_properties(bmstu_map_test PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)