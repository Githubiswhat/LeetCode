# 构建可执行文件
file(GLOB SOURCES "*.cpp")
add_library(Offer ${SOURCES}
        ../LCP/Solution123.cpp
        ../LCP/include/Solution123.h
        ../LCP/Solution88.cpp
        ../LCP/include/Solution88.h
        ../LCP/Solution6.cpp
        ../LCP/include/Solution6.h)
target_include_directories(Offer PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
