//Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). 
//Вывести дату в виде текста (например, «пятое января»).
#include <stdio.h>
#include <locale.h>
int main() {
	int d, m;
	setlocale(LC_ALL, "Rus");
	printf("введите дату в формате номер день и номер месяца>>"); scanf_s("%d%d", &d, &m);
	switch (d) {
	case '1':
		printf("первое");
		break;
	case '2':
		printf("второе");
		break;
	case '3':
		printf("третье");
		break;
	}
	switch (m) {
	case '1':
		printf("первое");
		break;
	case '2':
		printf("второе");
		break;
	case '3':
		printf("третье");
		break;
	}
	return 0;
}