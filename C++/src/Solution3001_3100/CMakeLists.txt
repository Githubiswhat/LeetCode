# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution3001_3100 ${SOURCES})
target_include_directories(Solution3001_3100 PUBLIC "include")

