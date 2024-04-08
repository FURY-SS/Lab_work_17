// Created by Vadim on 08.04.2024.

int length_of_string(const char *str) {
    int length = 0;

    while (*str) {
        length++;
        str++;
    }

    return length;
}