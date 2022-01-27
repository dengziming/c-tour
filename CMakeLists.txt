cmake_minimum_required(VERSION 3.20)
project(tours_of_c)

set(CMAKE_C_STANDARD 99)

# 遍历项目根目录下所有的 .cpp 文件
file (GLOB files leetcode/*.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()