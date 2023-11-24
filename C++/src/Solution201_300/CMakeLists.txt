# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution201_300 ${SOURCES})
target_include_directories(Solution201_300 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
