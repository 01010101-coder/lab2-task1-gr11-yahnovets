
/* find_last_position.c */

/* Автор: Владислав Яхновец */

#include "find_last_position.h"
#include <string.h>

/* Функция для нахождения последнего вхождения символа в строку */
int find_last_position(const char* sentence, const char target) {
    int last_pos = -1;  // Изначально позиция не найдена
    int length = strlen(sentence);
    
    // Поиск с конца строки для оптимизации
    for (int i = length - 1; i >= 0; i--) {
        if (sentence[i] == target || 
            sentence[i] == target - 32 ||  // Проверка для верхнего регистра
            sentence[i] == target + 32) {  // Проверка для нижнего регистра
            return i;  // Возвращаем позицию и выходим из функции
        }
    }
    
    return last_pos;
}
