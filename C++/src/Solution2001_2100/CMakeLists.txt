# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution2001_2100 ${SOURCES})
target_include_directories(Solution2001_2100 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
