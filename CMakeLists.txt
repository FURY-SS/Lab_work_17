cmake_minimum_required(VERSION 3.27)
project(lab_work_17 C)

set(CMAKE_C_STANDARD 11)

add_executable(lab_work_17 main.c
        string/string_.h
        string/string_.c
        "string/tasks/ remove_non_letters.h"
        string/tasks/remove_adjacent_equal_letters.h
        string/tasks/reverse_str.h
        string/tasks/replace_digit_to_space.h
        string/tasks/replace_word_to_word.h
        string/tasks/lexicographical_str.h
        string/tasks/print_revers_ordered.h
)
