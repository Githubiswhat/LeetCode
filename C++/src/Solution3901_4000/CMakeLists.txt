# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution3901_4000 ${SOURCES})
target_include_directories(Solution3901_4000 PUBLIC "include")

