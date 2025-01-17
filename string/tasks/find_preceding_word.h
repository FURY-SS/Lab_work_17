// Created by Vadim on 23.04.2024.

#ifndef LAB_WORK_17_FIND_PRECEDING_WORD_H
#define LAB_WORK_17_FIND_PRECEDING_WORD_H

#include "../string_.h"

word_descriptor find_preceding_word(char* s1, char* s2) {
    char* begin_search_1 = s1;
    char* begin_search_2 = s2;

    while (get_word_without_space(begin_search_1, &_bag.words[_bag.size])) {
        begin_search_1 = _bag.words[_bag.size].end + 1;
        _bag.size++;
    }

    while (get_word_without_space(begin_search_2, &_bag2.words[_bag2.size])) {
        begin_search_2 = _bag2.words[_bag2.size].end + 1;
        _bag2.size++;
    }

    bool stop = false;
    word_descriptor w;
    word_descriptor preceding_w = {.begin = NULL, .end = NULL};

    for (size_t i = 1; i < _bag.size; i++) {
        w = _bag.words[i];
        for (size_t j = 0; j < _bag2.size; j++)
            if (is_word_equal(w, _bag2.words[j])) {
                stop = true;
                break;
            }

        if (stop) {
            preceding_w = _bag.words[i - 1];
            break;
        }

    }

    free_bag(&_bag);
    free_bag(&_bag2);

    return preceding_w;
}

void test_16_empty() {
    char s1[] = "";
    char s2[] = "";

    char dest[20] = "";
    word_descriptor word = find_preceding_word(s1, s2);

    word_descriptor_to_string(word, dest);

    ASSERT_STRING("", dest);
}

void test_16_first_empty() {
    char s1[] = "";
    char s2[] = "I like";

    char dest[20] = "";
    word_descriptor word = find_preceding_word(s1, s2);

    word_descriptor_to_string(word, dest);

    ASSERT_STRING("", dest);
}

void test_16_second_empty() {
    char s1[] = "I like";
    char s2[] = "";

    char dest[20] = "";
    word_descriptor word = find_preceding_word(s1, s2);

    word_descriptor_to_string(word, dest);

    ASSERT_STRING("", dest);
}

void test_16_not_in_string() {
    char s1[] = "I like tea";
    char s2[] = "she drinks";

    char dest[20] = "";
    word_descriptor word = find_preceding_word(s1, s2);

    word_descriptor_to_string(word, dest);

    ASSERT_STRING("", dest);
}

void test_16_first_in_string() {
    char s1[] = "He likes tea";
    char s2[] = "she likes coffee";

    char dest[20] = "";
    word_descriptor word = find_preceding_word(s1, s2);

    word_descriptor_to_string(word, dest);

    ASSERT_STRING("He", dest);
}

void test_16_find_preceding_word() {
    test_16_empty();
    test_16_first_empty();
    test_16_second_empty();
    test_16_not_in_string();
    test_16_first_in_string();
}

#endif //LAB_WORK_17_FIND_PRECEDING_WORD_H