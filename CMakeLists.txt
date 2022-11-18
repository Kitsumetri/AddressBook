cmake_minimum_required(VERSION 3.23)
project(AddressBook)

set(CMAKE_CXX_STANDARD 20)

add_executable(AddressBook
        main.cpp
        Book.cpp Book.h)
