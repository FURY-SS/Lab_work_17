#ifndef LAB_WORK_17_PRINT_REVERS_ORDERED_H
#define LAB_WORK_17_PRINT_REVERS_ORDERED_H

#include "../string_.h"

void get_bag_of_words(bag_of_words* bag, char* s) {

    char* begin_search = s;
    bag->size = 0;

    while (get_word(begin_search, &bag->words[bag->size])) {
        begin_search = bag->words[bag->size].end;

        bag->size++;
    }
}

void print_word_1(word_descriptor word) {
    while (word.begin != word.end) {
        printf("%c", *word.begin);
        word.begin++;
    }
    printf(" ");
}

void print_reverse_ordered(char* s) {
    get_bag_of_words(&_bag, s);

    if (_bag.size >= 1)
        for (int i = (int) _bag.size - 1; i >= 0; i--)
            print_word_1(_bag.words[i]);

    printf("\n");

    free_bag(&_bag);
}

void test_7_empty() {
    char s[] = "";
    print_reverse_ordered(s);
}

void test_7_one_word() {
    char s[] = "like";
    print_reverse_ordered(s);
}

void test_7_only_letters() {
    char s[] = "l i k";
    print_reverse_ordered(s);
}

void test_7_more_word() {
    char s[] = "I like to drink tea";
    print_reverse_ordered(s);
}

void test_7_print_reverse_ordered() {
    printf("test 7: \n");
    test_7_empty();
    test_7_one_word();
    test_7_only_letters();
    test_7_more_word();
    printf("\n");
}

#endif //LAB_WORK_17_PRINT_REVERS_ORDERED_H
