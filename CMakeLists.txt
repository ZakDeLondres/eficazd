cmake_minimum_required(VERSION 3.8)
project(eficazd)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)
set(SOURCE_LINUX ${SOURCE_FILES} linux/socket/dbus.c linux/socket/dbus.h)

add_executable(eficazd ${SOURCE_FILES})
add_executable(eficazd_linux_x64 ${SOURCE_LINUX})

target_include_directories(eficazd_linux_x64 PUBLIC /usr/include/dbus-1.0/)
target_include_directories(eficazd_linux_x64 PUBLIC /usr/lib/dbus-1.0/include/)

target_link_libraries(eficazd_linux_x64 PUBLIC dbus-1)