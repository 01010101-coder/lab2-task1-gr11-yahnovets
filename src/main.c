
/* main.c */

/* Автор: Владислав Яхновец */

#include <stdio.h>
#include <string.h>
#include "find_last_position.h"

/* Функция для сравнения позиций последней буквы в двух предложениях */
void print_result(const char* sentence1, const char* sentence2, char target) {
    printf("Предложение 1: \"%s\"\n", sentence1);
    printf("Предложение 2: \"%s\"\n", sentence2);
    
    int pos1 = find_last_position(sentence1, target);
    int pos2 = find_last_position(sentence2, target);
    
    printf("Последняя позиция '%c' в первом предложении: %d\n", target, pos1);
    printf("Последняя позиция '%c' во втором предложении: %d\n", target, pos2);
    
    if (pos1 == -1 && pos2 == -1) {
        printf("Буква '%c' не найдена ни в одном из предложений.\n", target);
    } else if (pos1 == -1) {
        printf("Буква '%c' найдена только во втором предложении.\n", target);
    } else if (pos2 == -1) {
        printf("Буква '%c' найдена только в первом предложении.\n", target);
    } else if (pos1 > pos2) {
        printf("В первом предложении буква '%c' имеет больший порядковый номер.\n", target);
    } else if (pos2 > pos1) {
        printf("Во втором предложении буква '%c' имеет больший порядковый номер.\n", target);
    } else {
        printf("Буква '%c' имеет одинаковый порядковый номер в обоих предложениях.\n", target);
    }
}

int main() {
    /* Примеры предложений на русском */
    char sentence1[] = "Шарик полетел в лес.";
    char sentence2[] = "Я пошел домой, ш-ш-ш.";
    
    printf("=== Пример 1 ===\n");
    print_result(sentence1, sentence2, 'ш');
    
    printf("\n=== Пример 2 ===\n");
    char sentence3[] = "Машина едет по шоссе.";
    char sentence4[] = "Школьник идет в школу.";
    print_result(sentence3, sentence4, 'ш');
    
    /* Пример с английскими предложениями */
    printf("\n=== Пример 3 (English) ===\n");
    char sentence5[] = "She sells seashells by the seashore.";
    char sentence6[] = "The sun shines brightly in the summer sky.";
    print_result(sentence5, sentence6, 's');

    return 0;
}
