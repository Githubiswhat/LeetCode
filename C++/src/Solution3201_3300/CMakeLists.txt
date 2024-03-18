# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution3201_3300 ${SOURCES})
target_include_directories(Solution3201_3300 PUBLIC "include")

