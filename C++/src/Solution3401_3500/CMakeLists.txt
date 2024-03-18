# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution3401_3500 ${SOURCES})
target_include_directories(Solution3401_3500 PUBLIC "include")

