# Copyright 2023-11-09 skylanwei 
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

cmake_minimum_required(VERSION 3.8)
project(libtrpc_proto.a C CXX)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE DEBUG)

# 设置tRPC-Cpp的安装位置
set(TRPC_INSTALL_PATH /usr/local/trpc-cpp/trpc)

## 加载tRPC-Cpp头文件及库路径
include_directories("${TRPC_INSTALL_PATH}/include/")
#link_directories(${LIBRARY_INSTALL_PATHS})

## 设置proto文件桩代码生成工具的路径 - 具体使用方式见相关章节
include(${TRPC_INSTALL_PATH}/cmake/tools/trpc_utils.cmake)
set(PB_PROTOC ${TRPC_INSTALL_PATH}/bin/protoc)
set(TRPC_CPP_PLUGIN ${TRPC_INSTALL_PATH}/bin/trpc_cpp_plugin)


# Generated sources
# 设置proto文件列表，可一次设置多个
set(PB_SRCS ${CMAKE_SOURCE_DIR}/ssz_weixin_open_server.proto)
            #${CMAKE_SOURCE_DIR}/ssz_test_server.proto)

# COMPILE_PROTO: 根据proto文件生成相应的.pb.cc和.pb.h桩代码
# - param 1: 该参数为传出参数，表示proto生成.pb.cc文件
# - param 2: 该参数表示proto文件集合
# - param 3: 该参数为编译过程中生成的build/bin目录下的protoc可执行程序
# - param 4: 该参数为工程下的CMakeLists.txt所在目录
COMPILE_PROTO(OUT_PB_SRCS "${PB_SRCS}" ${PB_PROTOC} ${CMAKE_SOURCE_DIR})

# TRPC_COMPILE_PROTO: 根据proto文件生成相应的.trpc.pb.cc和.trpc.pb.h桩代码
# - param 1: 该参数为传出参数，表示proto生成.trpc.pb.cc文件
# - param 2: 该参数表示proto文件集合
# - param 3: 该参数为编译过程中生成的build/bin目录下的protoc可执行程序
# - param 4: 该参数为编译过程中生成的build/bin目录下的trpc_cpp_plugin可执行程序
# - param 5: 该参数为工程下的CMakeLists.txt所在目录
TRPC_COMPILE_PROTO(OUT_TRPC_PB_SRCS "${PB_SRCS}" ${PB_PROTOC} ${TRPC_CPP_PLUGIN} ${CMAKE_SOURCE_DIR})

set(LIBRARY_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/lib")

add_library(trpc_proto STATIC ${OUT_PB_SRCS} ${OUT_TRPC_PB_SRCS})




