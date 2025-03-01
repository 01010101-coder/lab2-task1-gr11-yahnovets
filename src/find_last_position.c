/* find_last_position.c */

/* Автор: Владислав Яхновец */

#include "find_last_position.h"
#include <string.h>

/* Функция для нахождения последнего вхождения подстроки в строку */
int find_last_position(const char* sentence, const char* target) {
    int last_pos = -1;
    char* pos = NULL;
    while ((pos = strstr(sentence, target)) != NULL) {
        last_pos = pos - sentence;  // Вычисляем позицию в строке
        sentence = pos + 1;  // Продолжаем искать дальше
    }
    return last_pos;
}
