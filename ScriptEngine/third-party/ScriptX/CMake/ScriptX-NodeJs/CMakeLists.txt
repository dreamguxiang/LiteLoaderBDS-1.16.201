cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SCRIPTX_BACKEND V8)

project(ScriptX-NodeJs)

include_directories(../../../NodeJs/include/v8)
include(../../CMakeLists.txt)