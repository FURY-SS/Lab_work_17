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

// 3 (a)

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

// 3 (b)

void test_find_non_space_is_space() {
    char s[] = "\t  3 4 5";

    assert(find_non_space(s) == &s[3]);
}

void test_find_non_space_is_no_space() {
    char s[] = "12345";

    assert(find_non_space(s) == &s[0]);
}

void test_find_non_space_is_space_and_no_elements() {
    char s[] = "    ";

    assert(find_non_space(s) == &s[4]);
}

void test_find_non_space() {
    test_find_non_space_is_space();
    test_find_non_space_is_no_space();
    test_find_non_space_is_space_and_no_elements();
}

// 3 (c)

void test_find_space_is_space_and_no_elements() {
    char s[] = "    ";

    assert(find_space(s) == &s[0]);
}

void test_find_space_is_space() {
    char s[] = "1234    ";

    assert(find_space(s) == &s[4]);
}

void test_find_space_is_no_space() {
    char s[] = "12345";

    assert(find_space(s) == &s[5]);
}

void test_find_space() {
    test_find_space_is_space_and_no_elements();
    test_find_space_is_space();
    test_find_space_is_no_space();
}

// 3 (d)

void test_find_non_space_reverse_is_no_space() {
    char s[] = "123";

    assert(find_non_space_reverse(&s[2],&s[0]) == &s[2]);
}

void test_find_non_space_reverse_is_last_element() {
    char s[] = "   3";

    assert(find_non_space_reverse(&s[3],&s[0]) == &s[3]);
}

void test_find_non_space_reverse_is_no_element() {
    char s[] = "    ";

    assert(find_non_space_reverse(&s[3],&s[0]) == &s[0]);
}

void test_find_non_space_reverse_is_not_last() {
    char s[] = "  3 ";

    assert(find_non_space_reverse(&s[3],&s[0]) == &s[2]);
}

void test_find_non_space_reverse() {
    test_find_non_space_reverse_is_no_space();
    test_find_non_space_reverse_is_last_element();
    test_find_non_space_reverse_is_no_element();
    test_find_non_space_reverse_is_not_last();
}

// 3 (e)

void test_find_space_reverse_is_no_space() {
    char s[] = "123";

    assert(find_space_reverse(&s[2],&s[0]) == &s[0]);
}

void test_find_space_reverse_is_last_space() {
    char s[] = "12  ";

    assert(find_space_reverse(&s[3],&s[0]) == &s[3]);
}

void test_find_space_reverse_is_not_last_space() {
    char s[] = "12  23";

    assert(find_space_reverse(&s[5],&s[0]) == &s[3]);
}

void test_find_space_reverse() {
    test_find_space_reverse_is_no_space();
    test_find_space_reverse_is_last_space();
    test_find_space_reverse_is_not_last_space();
}





void test () {
    test_length_of_string();
    test_strlen_();
    test_find();
    test_find_non_space();
    test_find_space();
    test_find_non_space_reverse();
    test_find_space_reverse();
}

int main() {
    test();
}
