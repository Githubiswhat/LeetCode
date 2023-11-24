# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution1801_1900 ${SOURCES})
target_include_directories(Solution1801_1900 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
