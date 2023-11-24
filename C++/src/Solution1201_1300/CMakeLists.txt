# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution1201_1300 ${SOURCES})
target_include_directories(Solution1201_1300 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
