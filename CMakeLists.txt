cmake_minimum_required(VERSION 3.0)

## set the project name 工程名称
# project(LinjokGaming)

## set the project name and version
project(LinjokGaming VERSION 1.0)
message(STATUS "Project Name: ${PROJECT_NAME}")

# 使用message查看默认的参数有哪些
# 添加STATUS参数 输出更好看
message(STATUS "Project Directory: ${PROJECT_SOURCE_DIR}")


# 设置c++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 默认存放静态库的文件夹位置
# 静态库
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/libs) 
# 动态库
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/libs)  
message(STATUS "CMAKE_LIBRARY_OUTPUT_DIRECTORY: "${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
# 可执行文件的输出
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)



# The following folder will be included, 保证找到对应位置的头文件
include_directories(${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/games)
# 配置版本信息 从 in 到 h
configure_file(${PROJECT_SOURCE_DIR}/include/configure.h.in ${PROJECT_SOURCE_DIR}/include/configure.h)

# 包含下层目录
add_subdirectory(games)

# add the executable 指定使用哪些源文件来编译生成目标文件
add_executable(main ${PROJECT_SOURCE_DIR}/main.cpp ${PROJECT_SOURCE_DIR}/src/menu.cpp)
target_link_libraries(main ${PROJECT_SOURCE_DIR}/libs)

