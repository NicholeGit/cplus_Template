cmake_minimum_required(VERSION 3.24)
project(cplus_template)


# c++ 17
set(CMAKE_CXX_STANDARD 17)
set(ROOT_DIR ${CMAKE_SOURCE_DIR})

# 添加头文件
include_directories(./include )

# 指定外部引用文件的搜索路径
link_directories(${ROOT_DIR}/lib)

# 添加源文件
aux_source_directory(./src DIR_SRCS)
#aux_source_directory(${ROOT_DIR}/src/gtest DIR_GTEST)
#aux_source_directory(${ROOT_DIR}/src/gmock DIR_GMOCK)

# 所需要编译的可执行文件
add_executable(cplus_template ${DIR_SRCS}  )

# 链接外部库
# cplus_template 必须与 add_executable 中的名字一样
target_link_libraries(cplus_template libgtest.a libgtest_main.a libgmock.a libgmock_main.a)