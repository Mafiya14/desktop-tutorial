//Дано целое число. Вывести его строку-описание вида «отрицательное четное число», «нулевое число», «положительное нечетное число» и т. д.
#include <stdio.h>
#include <locale.h>
int main() {
	int x;
	setlocale(LC_ALL, "Rus");
	printf("введите число>>"); scanf_s("%d", &x);
	if (x == 0) printf("нулевое");
	else 
	{
		if (x > 0) printf("положительное ");
		else printf("отрицательное ");
		if (x % 2 == 0) printf("четное");
		else printf("нечетное");
	}
	printf(" число");
	return 0;
}