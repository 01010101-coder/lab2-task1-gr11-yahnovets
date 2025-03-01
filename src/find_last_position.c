/* find_last_position.c */

/* Автор: Владислав Яхновец */

#include "find_last_position.h"

/* Функция для нахождения последнего вхождения символа в строку */
int find_last_position(const char* sentence, const char* target) {
    int last_pos = -1;  // Изначально позиция не найдена
    
    // Check for NULL inputs
    if (!sentence || !target || !target[0]) {
        return last_pos;
    }
    
    // Find last occurrence of the first character of target
    char first_char = target[0];
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == first_char) {
            last_pos = i;  // Запоминаем последнюю позицию
        }
    }
    return last_pos;
}
