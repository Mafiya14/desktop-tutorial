// Дано целое число, лежащее в диапазоне 1–999. Вывести его строкоописание вида «четное двузначное число», «нечетное трехзначное число» и т. д.
#include <stdio.h>
#include <locale.h>
int main() {
	int x;
	setlocale(LC_ALL, "Rus");
	printf("введите число>>"); scanf_s("%d", &x);
	if (x == 0) printf("нулевое");
	else
	{
		if (x % 2 == 0) printf("четное ");
		else printf("нечетное ");
		if (x / 100 == 0) printf("двузначное");
		else printf("трехзначное");
	}
	printf(" число");
	return 0;
}