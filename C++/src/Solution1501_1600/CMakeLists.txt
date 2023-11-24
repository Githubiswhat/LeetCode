# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution1501_1600 ${SOURCES})
target_include_directories(Solution1501_1600 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
