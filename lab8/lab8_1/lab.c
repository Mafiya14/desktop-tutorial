#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b;
	setlocale(LC_ALL, "Rus"); //функция локализации на русский язык
	printf("введите размер файла>>"); scanf_s("%d", &a);
	if (a % 1024 == 0) {
		b = a / 1024;
		printf("%d", (a / 1024));
	}
	else printf("%d", a / 1024 + 1);
	return(0);
}