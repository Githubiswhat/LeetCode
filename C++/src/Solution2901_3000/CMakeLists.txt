# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution2901_3000 ${SOURCES})
target_include_directories(Solution2901_3000 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
