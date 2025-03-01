/* find_last_position.h */

/* Автор: Владислав Яхновец */

#ifndef FIND_LAST_POSITION_H
#define FIND_LAST_POSITION_H

#include <stdio.h>

/**
 * Функция для нахождения последнего вхождения символа в строку
 * @param sentence строка, в которой производится поиск
 * @param target символ, который нужно найти
 * @return позиция последнего вхождения символа или -1, если символ не найден
 */
int find_last_position(const char* sentence, const char target);

#endif /* FIND_LAST_POSITION_H */
