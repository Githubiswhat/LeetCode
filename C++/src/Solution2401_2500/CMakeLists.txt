# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution2401_2500 ${SOURCES})
target_include_directories(Solution2401_2500 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
