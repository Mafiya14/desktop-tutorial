//3. ���� ��� ����� A, B, C �� �������� ���. ����� C ����������� ����� ������� A � B.����� ������������ ���� �������� AC � BC
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	int a, b, c, Lac, Lbc;
	setlocale(LC_ALL, "Rus");
	printf("������� ���������� ����� �>>"); scanf_s("%d", &a);
	printf("������� ���������� ����� �>>"); scanf_s("%d", &b);
	printf("������� ���������� ����� �>>"); scanf_s("%d", &c);
	Lac = abs(a - c);
	Lbc = abs(b - c);
	printf("����� AC ����� %d\n", Lac);
	printf("����� BC ����� %d\n", Lbc);
	printf("������������ �������� ����� %d", Lac * Lbc);
}