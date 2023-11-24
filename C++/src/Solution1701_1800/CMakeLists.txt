# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution1701_1800 ${SOURCES})
target_include_directories(Solution1701_1800 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
