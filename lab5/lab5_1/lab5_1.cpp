﻿#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	int x1, x2, y1, y2;
	float L;
	setlocale(LC_ALL, "Rus");
	printf("введите координаты первой точки>>"); scanf_s("%d%d", &x1, &y1);
	printf("введите координаты второй точки>>"); scanf_s("%d%d", &x2, &y2);
	L = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	printf("Расстояние между двумя точками равно %.2f", L);
}