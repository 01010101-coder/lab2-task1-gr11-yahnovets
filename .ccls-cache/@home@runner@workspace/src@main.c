/* main.c */
#include <stdio.h>
#include <wchar.h>

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

// Функция для сравнения двух позиций
int compare_two_positions(int pos1, int pos2) {
		if (pos1 > pos2) {
				return 1; // Позиция в первом предложении больше
		} else if (pos2 > pos1) {
				return -1; // Позиция во втором предложении больше
		} else {
				return 0; // Позиции одинаковые
		}
}

// Функция для вывода результата сравнения позиций
void compare_positions(int pos1, int pos2) {
		int result = compare_two_positions(pos1, pos2);
		if (result == 1) {
				printf("В первом предложении буква 'ш' имеет больший порядковый номер.\n");
		} else if (result == -1) {
				printf("Во втором предложении буква 'ш' имеет больший порядковый номер.\n");
		} else {
				printf("В обоих предложениях буква 'ш' имеет одинаковый порядковый номер.\n");
		}
}

int main() {
		wchar_t sentence1[] = L"Я люблю программировать на C.";
		wchar_t sentence2[] = L"Школа была далеко, но мы пришли вовремя.";

		// Ищем последние вхождения буквы "ш" в обоих предложениях
		int last_sh1 = find_last_occurrence(sentence1, L'ш');
		int last_sh2 = find_last_occurrence(sentence2, L'ш');

	// Сравниваем позиции
	compare_positions(last_sh1, last_sh2);

		return 0;
}

