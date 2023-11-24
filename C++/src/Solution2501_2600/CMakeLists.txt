# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution2501_2600 ${SOURCES})
target_include_directories(Solution2501_2600 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
