/* main.c */

/* Автор: Владислав Яхновец */

#include <stdio.h>
#include "find_last_position.h"

int main() {
		printf("Hello, world!");
		/* Примеры предложений */
		char sentence1[] = "Шарик полетел в лес.";
		char sentence2[] = "Я пошел домой, ш-ш-ш.";

		/* Нахождение последнего вхождения буквы 'ш' */
		int pos1 = find_last_position(sentence1, "ш");
		int pos2 = find_last_position(sentence2, "ш");

		/* Вывод результатов */
		printf("Последняя позиция 'ш' в первом предложении: %d\n", pos1);
		printf("Последняя позиция 'ш' во втором предложении: %d\n", pos2);

		if (pos1 > pos2) {
				printf("В первом предложении буква 'ш' имеет больший порядковый номер.\n");
		} else {
				printf("Во втором предложении буква 'ш' имеет больший порядковый номер.\n");
		}

		return 0;
}
