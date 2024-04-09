#include <stdio.h>
#include <assert.h>
#include "string/string_.h"

// 1

void test_length_of_string_is_not_empty() {
    char s[] = "Hello";

    assert(length_of_string(s) == 5);
}

void test_length_of_string_is_empty() {
    char s[] = "";

    assert(length_of_string(s) == 0);
}

void test_length_of_string_is_exceeds_the_size() {
    char s[2] = "Hello";

    assert(!(length_of_string(s) == 5));
}

void test_length_of_string() {
    test_length_of_string_is_not_empty();
    test_length_of_string_is_empty();
    test_length_of_string_is_exceeds_the_size();
}

// 2

void test_strlen_is_not_empty() {
    char s[10] = "\tHello\t";

    assert(strlen_(s) == 7);
}

void test_strlen_is_empty() {
    char s[10] = "";

    assert(strlen_(s) == 0);
}

void test_strlen_() {
    test_strlen_is_not_empty();
    test_strlen_is_empty();
}

// 3

void test_find_is_enabled() {
    char s[] = "Hello";
    char *begin = &s[0];
    char *end = &s[3];

    assert(find(begin, end,'e') == &s[1]);
}

void test_find_is_not_enabled() {
    char s[] = "Hello";
    char *begin = &s[0];
    char *end = &s[3];

    assert(find(begin, end,'o') == &s[3]);
}

void test_find() {
    test_find_is_enabled();
    test_find_is_not_enabled();
}









void test () {
    test_length_of_string();
    test_strlen_();
    test_find();
}

int main() {
    test();
}
