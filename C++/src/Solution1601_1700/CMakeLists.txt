# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution1601_1700 ${SOURCES})
target_include_directories(Solution1601_1700 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
