//���� ���������� ���� ������ ������������: (x1, y1), (x2, y2), (x3, y3). ����� ��� �������� � �������.
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	int x1, x2, x3, y1, y2, y3;
	float p, S, a, b, c, pp;
	setlocale(LC_ALL, "Rus");
	printf("������� ���������� ����� �>>"); scanf_s("%d%d", &x1, &y1);
	printf("������� ���������� ����� �>>"); scanf_s("%d%d", &x2, &y2);
	printf("������� ���������� ����� C>>"); scanf_s("%d%d", &x3, &y3);
	a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	c = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
	pp = a + b + c; p = pp / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("�������� ����� %f\n", pp);
	printf("������� ����� %f\n", S);
}