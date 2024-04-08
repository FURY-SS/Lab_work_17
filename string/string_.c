// Created by Vadim on 08.04.2024.

#include <malloc.h>
#include "string_.h"

int length_of_string(const char *str) {
    int length = 0;

    while (*str) {
        length++;
        str++;
    }

    return length;
}

size_t strlen_(const char* begin) {
    char* end = begin;
    while (*end != '\0')
        end++;
    return end - begin;
}

