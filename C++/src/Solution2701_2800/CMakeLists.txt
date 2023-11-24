# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution2701_2800 ${SOURCES})
target_include_directories(Solution2701_2800 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
