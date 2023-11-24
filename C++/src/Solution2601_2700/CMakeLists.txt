# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution2601_2700 ${SOURCES})
target_include_directories(Solution2601_2700 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
