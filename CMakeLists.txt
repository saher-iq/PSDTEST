cmake_minimum_required(VERSION 3.15)
project(SimpleCalculator CXX)

set(CMAKE_CXX_STANDARD 17)

# إضافة الملف الرئيسي للمشروع
add_executable(SimpleCalculator 
    src/main.cpp
)

# ربط مجلد الترويسات
target_include_directories(SimpleCalculator PRIVATE include)