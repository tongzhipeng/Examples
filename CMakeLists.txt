cmake_minimum_required(VERSION 3.15.0)
cmake_policy(SET CMP0091 NEW)
# set(VCPKG_ROOT_DIR "E:/work/vcpkg-2020.04")
set(CMAKE_CXX_STANDARD 11)
ADD_DEFINITIONS(-DUNICODE)
ADD_DEFINITIONS(-D_UNICODE)

set(VCPKG_TARGET_TRIPLET "x86-windows-static"  CACHE STRING "")
set(CMAKE_TOOLCHAIN_FILE "${VCPKG_ROOT_DIR}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")

project(Example VERSION 0.1.0)