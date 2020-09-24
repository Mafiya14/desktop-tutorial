#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	int a,b,c, Lac, Lbc;
	setlocale(LC_ALL, "Rus");
	printf("введите координаты точки А>>"); scanf_s("%d", &a);
	printf("введите координаты точки В>>"); scanf_s("%d", &b);
	printf("введите координаты точки С>>"); scanf_s("%d", &c);
	Lac = abs(a - c);
	Lbc = abs(b - c);
	printf("Длина AC равна %d\n", Lac);
	printf("Длина BC равна %d\n", Lbc);
	printf("Произведение отрезков равно %d", Lac * Lbc);
}