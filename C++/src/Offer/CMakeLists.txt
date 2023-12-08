# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Offer ${SOURCES}
        ../LCR/Solution123.cpp
        ../LCR/include/Solution123.h
        ../LCR/Solution88.cpp
        ../LCR/include/Solution88.h)
target_include_directories(Offer PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
