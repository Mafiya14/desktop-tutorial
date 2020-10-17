#include <stdio.h>
#include <locale.h>

int main()
{
	float a, b;
	int c;
	setlocale(LC_ALL, "Rus"); //функция локализации на русский язык
	printf("введите A B>>"); scanf_s("%f%f", &a, &b);
	c = a / b;
	printf("%d", c);
	return(0);
}