//���� ���������� �����, �� ������� �� ������������ ���� OX � OY. ���������� ����� ������������ ��������, � ������� ��������� ������ �����
#include <stdio.h>
int main() {
	int x, y;
	printf("coordinates x and y>>"); scanf_s("%d%d", &x, &y);
	if ((x > 0) && (y > 0)) printf("first");
	if ((x > 0) && (y < 0)) printf("second");
	if ((x < 0) && (y < 0)) printf("third");
	if ((x < 0) && (y > 0)) printf("forth");
	return 0;
}