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
        string/tasks/counter_palindrome_word.h
        string/tasks/swap_words.h
        string/tasks/change_word_order.h
        string/tasks/get_word_before_first_word_with_a.h
        string/tasks/find_last_common_word.h
        string/tasks/find_duplicate_words.h
        string/tasks/find_with_the_same_letters_words.h
        string/tasks/get_word_except_last.h
        string/tasks/find_preceding_word.h
        string/tasks/remove_palindrome_word.h
        string/tasks/balance_string.h
        string/tasks/letters_belong_string.h
)
