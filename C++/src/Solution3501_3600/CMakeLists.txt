# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution3501_3600 ${SOURCES})
target_include_directories(Solution3501_3600 PUBLIC "include")

