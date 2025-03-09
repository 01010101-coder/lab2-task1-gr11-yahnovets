/* main.c */
#include <stdio.h>
#include <wchar.h>

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

int main() {
		wchar_t sentence1[] = L"Я люблю программировать на C.";
		wchar_t sentence2[] = L"Школа была далеко, но мы пришли вовремя.";

		// Ищем последние вхождения буквы "ш" в обоих предложениях
		int last_sh1 = find_last_occurrence(sentence1, L'ш');
		int last_sh2 = find_last_occurrence(sentence2, L'ш');

		// Выводим позиции последнего вхождения буквы "ш"
		printf("Последняя позиция буквы 'ш' в первом предложении: %d\n", last_sh1);
		printf("Последняя позиция буквы 'ш' во втором предложении: %d\n", last_sh2);

		return 0;
}

