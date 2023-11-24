# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Solution2201_2300 ${SOURCES})
target_include_directories(Solution2201_2300 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
