// Created by Vadim on 08.04.2024.

#ifndef LAB_WORK_17_STRING__H
#define LAB_WORK_17_STRING__H

// возвращает длину строки
int length_of_string(const char *str);

// возвращает количество символов в строке
size_t strlen_(const char* begin);

// возвращает указатель на первый элемент, расположенным между адресами begin и end не включая end.
char* find(char *begin, char *end, int ch);

//  возвращает указатель на первый символ, если символ не найден, возвращается адрес первого ноль-символа.
char* find_non_space(char *begin);

// возвращает указатель на первый пробельный символ или на первый ноль-символ.
char* find_space(char *begin);

// возвращает указатель на первый справа символ, отличный от пробельных, еслисимвол не найден, возвращается адрес rend.
char* find_non_space_reverse(char *rbegin, const char *rend);

// возвращает указатель на первый пробельный символ справа, tсли символ не найден, возвращается адрес rend.
char* find_space_reverse(char *rbegin, const char *rend);

// Функция возвращает отрицательное значение, если lhs располагается до rhs
// значение 0, если lhs и rhs равны,
// иначе – положительное значение
int strcmp_(const char *lhs, const char *rhs);

//
char* copy(const char *begin_source, const char *end_source, char *begin_destination);

//
char* copy_if(const char *begin_source, const char *end_source, char *begin_destination, int (*f)(int));

//
char* copy_if_reverse(const char *r_begin_source, const char *r_end_source, char *begin_destination, int (*f)(int));

#endif //LAB_WORK_17_STRING__H
