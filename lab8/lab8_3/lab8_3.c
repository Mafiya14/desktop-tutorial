//ƒаны целые положительные числа A и B (A > B). Ќа отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). 
//Ќайти длину незан€той части отрезка A.
#include <stdio.h>
#include <locale.h>
int main()
{
	float a, b;
	setlocale(LC_ALL, "Rus"); //функци€ локализации на русский €зык
	printf("введите A B>>"); scanf_s("%f%f", &a, &b);
	while (a >= b)
		a = a - b;
	printf("%f", a);
	return 0;
}