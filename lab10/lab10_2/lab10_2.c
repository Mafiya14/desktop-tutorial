//���� ��� ����� �����: A, B, C. ��������� ���������� ������������: ������������ ������� ����������� A < B < C�.
#include <stdio.h>
#include <locale.h>
int main()
{
	int a, b, c;
	setlocale(LC_ALL, "Rus");
	printf("�������� 3 ����� �����>>"); scanf_s("%d%d%d", &a, &b, &c);
	if ((a < b) && (b < c)) printf("yes");
	else printf("no");
	return 0;
}