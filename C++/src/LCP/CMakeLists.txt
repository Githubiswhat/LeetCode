# 构建可执行文件
# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(LCP ${SOURCES}
        Solution24.cpp
        include/Solution24.h)
target_include_directories(LCP PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

