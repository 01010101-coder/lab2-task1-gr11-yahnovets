
/* find_last_position.c */

/* Автор: Владислав Яхновец */

/* Подключаем заголовочные файлы */
#include "find_last_position.h"

/* Функция для нахождения последнего вхождения буквы в строку */
int find_last_position(const char* sentence, char target) {
    int last_pos = -1;  // Изначально позиция не найдена
    for (int i = 0; sentence[i] != '\0'; i++) {
        // Проверяем, совпадает ли текущий символ с искомым (без учета регистра)
        if (tolower(sentence[i]) == tolower(target)) {
            last_pos = i;  // Обновляем позицию последнего вхождения
        }
    }
    return last_pos;
}
