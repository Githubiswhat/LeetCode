# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution1901_2000 ${SOURCES})
target_include_directories(Solution1901_2000 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
