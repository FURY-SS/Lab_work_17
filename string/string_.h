// Created by Vadim on 08.04.2024.

#ifndef LAB_WORK_17_STRING__H
#define LAB_WORK_17_STRING__H

// возвращает длину строки
int length_of_string(const char *str);

// возвращает количество символов в строке
size_t strlen_(const char* begin);

// возвращает указатель на первый элемент, расположенным между адресами begin и end не включая end.
char* find(char *begin, char *end, int ch);

//
char* find_non_space(char *begin);

#endif //LAB_WORK_17_STRING__H
