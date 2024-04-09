// Created by Vadim on 08.04.2024.

#include <stdio.h>
#include <malloc.h>
#include <ctype.h>
#include "string_.h"

int length_of_string(const char *str) {
    int length = 0;

    while (*str) {
        length++;
        str++;
    }

    return length;
}

size_t strlen_(const char *begin) {
    char *end = begin;

    while (*end != '\0') {
        end++;
    }

    return end - begin;
}

char* find(char *begin, char *end, int ch) {

    while (begin != end && *begin != ch) {
        begin++;
    }

    return begin;
}

char* find_non_space(char *begin) {

}

