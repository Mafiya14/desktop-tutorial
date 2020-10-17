#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b;
	setlocale(LC_ALL, "Rus"); //функция локализации на русский язык
	printf("введите A>>"); scanf_s("%d", &a);
	b = a / 100; //1 цифра
	a = a - b * 100;
	a = a * 10 + b;
	printf("%d", a);
	return(0);
}