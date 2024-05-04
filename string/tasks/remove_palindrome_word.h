// Created by Vadim on 23.04.2024.

#ifndef LAB_WORK_17_REMOVE_PALINDROME_WORD_H
#define LAB_WORK_17_REMOVE_PALINDROME_WORD_H

#include "../string_.h"

void remove_palindrome_word(char* s) {
    char* read_begin = _string_buffer;
    char* read_end = copy(s, s + strlen_(s), _string_buffer);
    char* rec_ptr = s;

    word_descriptor word;
    while (get_word(read_begin, &word)) {
        if (!is_palindrome_word(&word)) {
            rec_ptr = copy(word.begin, word.end, rec_ptr);

            if (word.end !=  read_end)
                *rec_ptr++ = ' ';
        }
        read_begin = word.end + 1;
    }

    *rec_ptr = '\0';

    free_string(_string_buffer);
}

void test_17_empty() {
    char s[] = "";
    remove_palindrome_word(s);
    ASSERT_STRING("", s);
}

void test_17_no_palindrome() {
    char s[] = "no palindrome";
    remove_palindrome_word(s);
    ASSERT_STRING("no palindrome", s);
}

void test_17_only_letters() {
    char s[] = "a b c d";
    remove_palindrome_word(s);
    ASSERT_STRING("", s);
}

void test_17_different_string() {
    char s[] = "adda are word a b she word";
    remove_palindrome_word(s);
    ASSERT_STRING("are word she word", s);
}

void test_17_remove_palindrome_word() {
    test_17_empty();
    test_17_no_palindrome();
    test_17_only_letters();
    test_17_different_string();
}

#endif //LAB_WORK_17_REMOVE_PALINDROME_WORD_H