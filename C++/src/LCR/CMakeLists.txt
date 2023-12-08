# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(LCR ${SOURCES})
target_include_directories(LCR PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
