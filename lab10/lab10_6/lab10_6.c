//���� ����� ����� a, b, c, ���������� ��������� ���������� ������������. 
//��������� ���������� ������������: ������������ �� ��������� a, b, c �������� �������������.
#include <stdio.h>
#include <locale.h>
int main() {
	int a, b, c;
	setlocale(LC_ALL, "Rus");
	printf(">>������� ������� ������������"); scanf_s("%d%d%d", &a, &b, &c);
	if (a * a + b * b == c * c) printf("yes");
	else printf("no");
	return 0;
}