cmake_minimum_required(VERSION 3.2)

if(WIN32)
  add_compile_options($<$<CXX_COMPILER_ID:MSVC>:/MP>) # For MSVC, use multi-core processor to compile project
  add_definitions(-DNOMINMAX -D_USE_MATH_DEFINES) # 对于windows：1、取消全局min max宏；2、定义_USE_MATH_DEFINES来使用M_PI宏（需要#include <math.h>）
endif()

# 可选：对于msvc，默认将所有文件都当成utf-8来处理（需要先手动将所有文件保存成utf-8）
#if(WIN32)
  #add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
  #add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")
#endif()

project(ProjectName VERSION 2.0.0 LANGUAGES CXX)

# C++ 20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 仅需要编译指定（debug或release）版本
set(CMAKE_CONFIGURATION_TYPES "Release;Debug" CACHE STRING "" FORCE) 

add_subdirectory(Apps)
add_subdirectory(External)
add_subdirectory(Example)
add_subdirectory(Src)



