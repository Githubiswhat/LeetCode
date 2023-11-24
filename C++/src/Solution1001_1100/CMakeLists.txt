# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution1001_1100 ${SOURCES})
target_include_directories(Solution1001_1100 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
