/* main.c */

/* Автор: Владислав Яхновец */

#include <stdio.h>
#include "find_last_position.h"

int main() {
		/* Примеры предложений */
		char sentence1[] = "Dog shine";
		char sentence2[] = "bla bla ss";

		/* Нахождение последнего вхождения буквы 's' */
		int pos1 = find_last_position(sentence1, 's');
		int pos2 = find_last_position(sentence2, 's');

		/* Вывод результатов */
		printf("Последняя позиция 's' в первом предложении: %d\n", pos1);
		printf("Последняя позиция 's' во втором предложении: %d\n", pos2);

		if (pos1 > pos2) {
				printf("В первом предложении буква 's' имеет больший порядковый номер.\n");
		} else {
				printf("Во втором предложении буква 's' имеет больший порядковый номер.\n");
		}

		return 0;
}
