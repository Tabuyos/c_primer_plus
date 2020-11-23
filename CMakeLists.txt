cmake_minimum_required(VERSION 3.19)
project(c_primer_plus C)

set(CMAKE_C_STANDARD 11)

add_executable(c_primer_plus main.c)
add_executable(say_hello src/say_hello/say_hello.c)
add_executable(chapter_2_main src/chapter_2/chapter_2_main.c)
add_executable(chapter_3_main src/chapter_3/chapter_3_main.c)