#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	int x1, x2, x3, y1, y2, y3;
	float Lac, Lbc;
	setlocale(LC_ALL, "Rus");
	printf("введите координаты точки А>>"); scanf_s("%d%d", &x1, &y1);
	printf("введите координаты точки В>>"); scanf_s("%d%d", &x2, &y2);
	printf("введите координаты точки С>>"); scanf_s("%d%d", &x3, &y3);
	Lac = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	Lbc = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	printf("Длина AC равна %.2f\n", Lac);
	printf("Длина BC равна %.2f\n", Lbc);
	printf("Сумма отрезков равна %.2f", Lac + Lbc);
}