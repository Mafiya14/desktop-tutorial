//���� �������������� �����. ��������� ���������� ������������: ������� ����� �������� ��������� ����� ������� � ������ ������.
#include <stdio.h>
#include <locale.h>
int main() {
	int ch, a, b, c, d;
	setlocale(LC_ALL, "Rus");
	printf("������� �������������� �����>>"); scanf_s("%d", &ch);
	a = ch / 1000; //first
	b = ch / 100 % 10; //second
	c = ch % 100 / 10; //third
	d = ch % 10; //fourth
	if ((a == d) && (b == c)) printf("yes");
	else printf("no");
	return 0;
}