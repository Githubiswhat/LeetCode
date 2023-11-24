# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution2801_2900 ${SOURCES})
target_include_directories(Solution2801_2900 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
