/* find_last_position.c */

/* Автор: Владислав Яхновец */

#include "find_last_position.h"
#include <wchar.h>  // Для работы с wchar_t и широкими строками
#include <stdlib.h>

/* Функция для нахождения последнего вхождения символа в строку */
int find_last_position(const char* sentence, wchar_t target) {    int last_pos = -1;  // Изначально позиция не найдена

    // Массив для хранения строки в формате wchar_t
    wchar_t w_sentence[256];

    // Преобразуем строку из char в wchar_t
    mbstowcs(w_sentence, sentence, 256);

    // Ищем последний символ в строке
    for (int i = 0; w_sentence[i] != L'\0'; i++) {
        if (w_sentence[i] == target) {
            last_pos = i;  // Запоминаем последнюю позицию
        }
    }
    return last_pos;
}