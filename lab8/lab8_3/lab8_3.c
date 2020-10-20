#include <stdio.h>
#include <locale.h>
int main()
{
	float a, b;
	setlocale(LC_ALL, "Rus"); //функция локализации на русский язык
	printf("введите A B>>"); scanf_s("%f%f", &a, &b);
	while (a >= b)
		a = a - b;
	printf("%f", a);
	return(0);
}