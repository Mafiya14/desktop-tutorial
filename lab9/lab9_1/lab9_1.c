#include <stdio.h>
#include <locale.h>

int main()
{
	int N;
	setlocale(LC_ALL, "Rus"); //функция локализации на русский язык
	printf("введите N>>"); scanf_s("%d", &N);
	printf("%d", N % 60);
	return (0);
}