//����� ���������� ����� ����� ������� � ��������� ������������ (x1, y1) � (x2, y2)
#include <stdio.h>//���������� ���������� ����� ������
#include <math.h>//���������� ���������� ��� ���������� ������� �������������� ������� (pow)
#include <locale.h>//���������� ���������� ��� �����������
main()
{
	int x1, x2, y1, y2;
	float L;
	setlocale(LC_ALL, "Rus");
	printf("������� ���������� ������ �����>>"); scanf_s("%d%d", &x1, &y1);
	printf("������� ���������� ������ �����>>"); scanf_s("%d%d", &x2, &y2);
	L = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	printf("���������� ����� ����� ������� ����� %.2f", L);
}