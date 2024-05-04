// Created by Vadim on 19.04.2024.

#ifndef LAB_WORK_17_REVERSE_STR_H
#define LAB_WORK_17_REVERSE_STR_H

#include "../string_.h"
#include <ctype.h>

void digit_to_start(word_descriptor word) {
    char* end_string_buffer = copy(word.begin, word.end, _string_buffer);

    char* res_position = copy_if_reverse(end_string_buffer - 1, _string_buffer - 1, word.begin, isdigit);

    copy_if(_string_buffer, end_string_buffer, res_position, isalpha);
}

void inverted_digit_to_start_letters_to_end(char* s) {
    char* begin_search = s;
    word_descriptor word;

    while (get_word(begin_search, &word)) {
        digit_to_start(word);
        begin_search = word.end;
    }
}

void reverse_word(word_descriptor word) {
    char* start = word.begin;
    char* end = word.end - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void reverse_word_in_string(char* s) {
    char* begin_search = s;
    word_descriptor word;

    while (get_word(begin_search, &word)) {
        reverse_word(word);
        begin_search = word.end;
    }
}

void test_3_empty() {
    char s[] = "";
    reverse_word_in_string(s);
    ASSERT_STRING("", s);
}

void test_3_one_letters() {
    char s[] = "a";
    reverse_word_in_string(s);
    ASSERT_STRING("a", s);
}

void test_3_one_word() {
    char s[] = "abcd";
    reverse_word_in_string(s);
    ASSERT_STRING("dcba", s);
}

void test_3_two_word() {
    char s[] = "abcde aaa";
    reverse_word_in_string(s);
    ASSERT_STRING("edcba aaa", s);
}

void test_3_reverse_word() {
    test_3_empty();
    test_3_one_letters();
    test_3_one_word();
    test_3_two_word();
}

#endif //LAB_WORK_17_REVERSE_STR_H