# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution3601_3700 ${SOURCES})
target_include_directories(Solution3601_3700 PUBLIC "include")

