
/* find_last_position.c */

/* Автор: Владислав Яхновец */

#include "find_last_position.h"
#include <string.h>
#include <wchar.h>
#include <locale.h>

/* Функция для нахождения последнего вхождения символа в строку */
int find_last_position(const char* sentence, const char target) {
    int last_pos = -1;  // Изначально позиция не найдена
    int length = strlen(sentence);
    
    // Поиск с начала строки
    for (int i = 0; i < length; i++) {
        if (sentence[i] == target) {
            last_pos = i;  // Сохраняем позицию
        }
    }
    
    return last_pos;
}
