//���� ����������� �����. ��������� ���������� ������������: ������ ������� ����� �������� ������������ ��� ��������� �������������������.
#include <stdio.h>
#include <locale.h>
int main() {
	int ch, a, b, c;
	setlocale(LC_ALL, "Rus");
	printf("������� ����������� �����>>"); scanf_s("%d", &ch);
	a = ch / 100; b = ch % 100 / 10; c = ch % 10;
	if (((a > b) && (b > c)) || ((a < b) && (b < c))) printf("yes");
	else printf("no");
	return 0;
}