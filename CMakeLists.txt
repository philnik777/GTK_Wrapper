cmake_minimum_required(VERSION 3.10)
project(gtk_wrapper VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(PkgConfig REQUIRED)
PKG_CHECK_MODULES(GTK3 REQUIRED gtk+-3.0)
include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})

add_subdirectory(src)

set(GTK_LIBRARIES
    ${GTK_SUBPROJECTS} 
    ${GTK3_LIBRARIES} 
    PARENT_SCOPE
)

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
	add_compile_options(
        -fuse-ld=lld 
        -Weverything 
        -Wno-padded 
        -Wno-c++98-compat 
        -Wno-c++98-compat-pedantic
        )

    if (CMAKE_BUILD_TYPE STREQUAL "Release")
        add_compile_options(
            -flto=thin
        )
    endif()
endif()
