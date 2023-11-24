# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution901_1000 ${SOURCES})
target_include_directories(Solution901_1000 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
