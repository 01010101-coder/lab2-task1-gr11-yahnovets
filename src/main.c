
/* main.c */

/* Автор: Владислав Яхновец */

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "find_last_position.h"

/* Функция для сравнения позиций последней буквы в двух предложениях */
void print_result(const char* sentence1, const char* sentence2, const char* target_str) {
    printf("Предложение 1: \"%s\"\n", sentence1);
    printf("Предложение 2: \"%s\"\n", sentence2);
    
    wchar_t target = (wchar_t)target_str[0]; // Берем первый символ из строки
    
    int pos1 = find_last_position(sentence1, target);
    int pos2 = find_last_position(sentence2, target);
    
    printf("Последняя позиция '%s' в первом предложении: %d\n", target_str, pos1);
    printf("Последняя позиция '%s' во втором предложении: %d\n", target_str, pos2);
    
    if (pos1 == -1 && pos2 == -1) {
        printf("Буква '%s' не найдена ни в одном из предложений.\n", target_str);
    } else if (pos1 == -1) {
        printf("Буква '%s' найдена только во втором предложении.\n", target_str);
    } else if (pos2 == -1) {
        printf("Буква '%s' найдена только в первом предложении.\n", target_str);
    } else if (pos1 > pos2) {
        printf("В первом предложении буква '%s' имеет больший порядковый номер.\n", target_str);
    } else if (pos2 > pos1) {
        printf("Во втором предложении буква '%s' имеет больший порядковый номер.\n", target_str);
    } else {
        printf("Буква '%s' имеет одинаковый порядковый номер в обоих предложениях.\n", target_str);
    }
}

int main() {
    /* Установка локали для корректной работы с кириллицей */
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    /* Примеры предложений на русском */
    char sentence1[] = "Шарик полетел в лес.";
    char sentence2[] = "Я пошел домой, ш-ш-ш.";
    
    printf("=== Пример 1 ===\n");
    print_result(sentence1, sentence2, "ш");
    
    printf("\n=== Пример 2 ===\n");
    char sentence3[] = "Машина едет по шоссе.";
    char sentence4[] = "Школьник идет в школу.";
    print_result(sentence3, sentence4, "ш");
    
    /* Пример с английскими предложениями */
    printf("\n=== Пример 3 (English) ===\n");
    char sentence5[] = "She sells seashells by the seashore.";
    char sentence6[] = "The sun shines brightly in the summer sky.";
    print_result(sentence5, sentence6, "s");

    return 0;
}
