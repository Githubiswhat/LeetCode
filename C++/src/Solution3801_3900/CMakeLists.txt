# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution3801_3900 ${SOURCES})
target_include_directories(Solution3801_3900 PUBLIC "include")

