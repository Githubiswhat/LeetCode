# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution501_600 ${SOURCES})
target_include_directories(Solution501_600 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
