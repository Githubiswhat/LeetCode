# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Offer ${SOURCES})
target_include_directories(Offer PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
