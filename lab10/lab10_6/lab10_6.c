//Даны целые числа a, b, c, являющиеся сторонами некоторого треугольника. 
//Проверить истинность высказывания: «Треугольник со сторонами a, b, c является прямоугольным».
#include <stdio.h>
#include <locale.h>
int main() {
	int a, b, c;
	setlocale(LC_ALL, "Rus");
	printf(">>введите стороны треугольника"); scanf_s("%d%d%d", &a, &b, &c);
	if (a * a + b * b == c * c) printf("yes");
	else printf("no");
	return 0;
}