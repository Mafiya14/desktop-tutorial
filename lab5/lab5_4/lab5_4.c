//���� ���������� ���� ��������������� ������ ��������������:(x1, y1), (x2, y2).������� �������������� ����������� ���� ���������.
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	int x1, x2, y1, y2, P, S, a, b;
	setlocale(LC_ALL, "Rus");
	printf("������� ���������� ����� �>>"); scanf_s("%d%d", &x1, &y1);
	printf("������� ���������� ����� �>>"); scanf_s("%d%d", &x2, &y2);
	a = abs(x2 - x1); b = abs(y2 - y1);
	P = 2 * (a + b); S = a * b;
	printf("�������� ����� %d\n", P);
	printf("������� ����� %d\n", S);
	return 0;
}