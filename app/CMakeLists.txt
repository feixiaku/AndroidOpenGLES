cmake_minimum_required(VERSION 3.4.1)

#project(helloJNI)

add_library(helloJNI
            SHARED
            src/main/cpp/HelloJNI.cpp )

find_library( log-lib log )

target_link_libraries( helloJNI ${log-lib} ${helloJNI})