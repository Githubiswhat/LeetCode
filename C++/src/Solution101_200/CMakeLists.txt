# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution101_200 ${SOURCES})
target_include_directories(Solution101_200 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
