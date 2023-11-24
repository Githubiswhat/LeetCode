# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution1401_1500 ${SOURCES})
target_include_directories(Solution1401_1500 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
