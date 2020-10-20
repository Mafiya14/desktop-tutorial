//Даны координаты двух противоположных вершин прямоугольника:(x1, y1), (x2, y2).Стороны прямоугольника параллельны осям координат.
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	int x1, x2, y1, y2, P, S, a, b;
	setlocale(LC_ALL, "Rus");
	printf("введите координаты точки А>>"); scanf_s("%d%d", &x1, &y1);
	printf("введите координаты точки В>>"); scanf_s("%d%d", &x2, &y2);
	a = abs(x2 - x1); b = abs(y2 - y1);
	P = 2 * (a + b); S = a * b;
	printf("Периметр равен %d\n", P);
	printf("Площадь равна %d\n", S);
	return 0;
}