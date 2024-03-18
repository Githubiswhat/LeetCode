# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution3101_3200 ${SOURCES})
target_include_directories(Solution3101_3200 PUBLIC "include")

