/* find_sh.c */

#include "find_sh.h"
#include <stdio.h>

// Функция для нахождения последнего вхождения буквы в строку
int find_last_occurrence(const wchar_t* str, wchar_t letter) {
    int last_index = -1; // Изначально нет вхождения
    for (int i = 0; str[i] != L'\0'; i++) {
        if (str[i] == letter) {
            last_index = i; // Обновляем индекс, если нашли букву
        }
    }
    return last_index;
}