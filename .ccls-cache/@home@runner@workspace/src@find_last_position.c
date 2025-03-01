/* find_last_position.c */

/* Автор: Владислав Яхновец */

#include "find_last_position.h"

/* Функция для нахождения последнего вхождения символа в строку */
int find_last_position(const char* sentence, const char target) {
    int last_pos = -1;  // Изначально позиция не найдена
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == target) {
            last_pos = i;  // Запоминаем последнюю позицию
        }
    }
    return last_pos;
}
