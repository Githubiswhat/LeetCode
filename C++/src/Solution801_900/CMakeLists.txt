# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution801_900 ${SOURCES})
target_include_directories(Solution801_900 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
