#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b;
	setlocale(LC_ALL, "Rus"); //функция локализации на русский язык
	printf("введите A>>"); scanf_s("%d", &a);
	b = a / 10; //1 число
	a = a % 10; //2 число
	b = a * 10 + b;
	printf("%d", b);
	return(0);
}