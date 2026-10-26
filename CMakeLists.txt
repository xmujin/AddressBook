cmake_minimum_required(VERSION 3.10)

project(AddressBook LANGUAGES CXX)

find_package(fmt CONFIG REQUIRED)

add_executable(AddressBook main.cpp)

target_link_libraries(AddressBook PRIVATE fmt::fmt)