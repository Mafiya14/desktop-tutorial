#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	int x1, x2, x3, y1, y2, y3;
	float Lac, Lbc;
	setlocale(LC_ALL, "Rus");
	printf("������� ���������� ����� �>>"); scanf_s("%d%d", &x1, &y1);
	printf("������� ���������� ����� �>>"); scanf_s("%d%d", &x2, &y2);
	printf("������� ���������� ����� �>>"); scanf_s("%d%d", &x3, &y3);
	Lac = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	Lbc = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	printf("����� AC ����� %.2f\n", Lac);
	printf("����� BC ����� %.2f\n", Lbc);
	printf("����� �������� ����� %.2f", Lac + Lbc);
}