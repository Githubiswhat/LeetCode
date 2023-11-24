# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution401_500 ${SOURCES})
target_include_directories(Solution401_500 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
