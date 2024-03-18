# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution3301_3400 ${SOURCES})
target_include_directories(Solution3301_3400 PUBLIC "include")

