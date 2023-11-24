# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution301_400 ${SOURCES})
target_include_directories(Solution301_400 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
