# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution3701_3800 ${SOURCES})
target_include_directories(Solution3701_3800 PUBLIC "include")

