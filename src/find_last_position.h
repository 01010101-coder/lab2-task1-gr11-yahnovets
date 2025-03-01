/* find_last_position.h */

/* Автор: Владислав Яхновец */

#ifndef FIND_LAST_POSITION_H
#define FIND_LAST_POSITION_H

#include <wchar.h> /* Для определения типа wchar_t */

/* Функция для нахождения последнего вхождения символа в строку */
int find_last_position(const char* sentence, wchar_t target);

#endif