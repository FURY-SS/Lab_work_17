#include <stdio.h>
#include <assert.h>
#include "string/string_.h"

void test_length_of_string_is_not_empty() {
    char s[] = "Hello";

    assert(length_of_string(s) == 5);
}

void test_length_of_string_is_empty() {
    char s[] = "";

    assert(length_of_string(s) == 0);
}

void test_length_of_string_is_exceeds_the_size() {
    char s[10] = "Hello";

    assert(length_of_string(s) == 5);
}

void test_length_of_string() {
    test_length_of_string_is_not_empty();
    test_length_of_string_is_empty();
    test_length_of_string_is_exceeds_the_size();
}

void test () {
    test_length_of_string();
}

int main() {
    test;
}
