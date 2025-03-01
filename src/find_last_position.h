/* find_last_position.h */

#ifndef FIND_LAST_POSITION_H
#define FIND_LAST_POSITION_H

#include <stdio.h>
#include <ctype.h>

/* Функция для нахождения последнего вхождения буквы в строку */
int find_last_position(const char* sentence, char target);

#endif /* FIND_LAST_POSITION_H */


/* find_last_position.c */
#include "find_last_position.h"
#include <string.h>

int find_last_position(const char* sentence, char target) {
    int lastPos = -1;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == target) {
            lastPos = i;
        }
    }
    return lastPos;
}


/* main.c */
#include <stdio.h>
#include "find_last_position.h"

int main() {
    const char* sentence = "Hello, world!";
    char target = 'o';
    int position = find_last_position(sentence, target);
    if (position != -1) {
        printf("Last occurrence of '%c' is at position: %d\n", target, position);
    } else {
        printf("Character '%c' not found in the sentence.\n", target);
    }
    return 0;
}