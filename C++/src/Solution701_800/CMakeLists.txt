# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution701_800 ${SOURCES})
target_include_directories(Solution701_800 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
