//��� ����� ��� � ����� ����� �� 1 �� 31 � ������ � ����� ����� � ��������� 1�12 (1 � ������, 2 � ������� � �. �.). 
//������� ���� � ���� ������ (��������, ������ �������).
#include <stdio.h>
#include <locale.h>
int main() {
	int d, m;
	setlocale(LC_ALL, "Rus");
	printf("������� ���� � ������� ����� ���� � ����� ������>>"); scanf_s("%d%d", &d, &m);
	switch (d) {
	case 1: printf("������"); break;
	case 2: printf("������"); break;
	case 3: printf("������"); break;
	case 4: printf("���������"); break;
	case 5: printf("�����"); break;
	case 6: printf("������"); break;
	case 7: printf("�������"); break;
	case 8: printf("�������"); break;
	case 9: printf("�������"); break;
	case 10: printf("�������"); break;
	case 11: printf("������������"); break;
	case 12: printf("�����������"); break;
	case 13: printf("�����������"); break;
	case 14: printf("�������������"); break;
	case 15: printf("�����������");break;
	case 16: printf("������������"); break;
	case 17: printf("�����������"); break;
	case 18: printf("�������������"); break;
	case 19: printf("�������������"); break;
	case 20: printf("���������"); break;
	case 21: printf("�������� ������"); break;
	case 22: printf("�������� ������"); break;
	case 23: printf("�������� ������"); break;
	case 24: printf("�������� ���������"); break;
	case 25: printf("�������� �����"); break;
	case 26: printf("�������� ������"); break;
	case 27: printf("�������� �������"); break;
	case 28: printf("�������� �������"); break;
	case 29: printf("�������� �������"); break;
	case 30: printf("���������"); break;
	case 31: printf("�������� ������"); break;
	default: printf("��� ������������, ������� ������������ ����");
	}
	switch (m) {
	case 1: printf(" ������"); break;
	case 2: printf(" �������"); break;
	case 3: printf(" �����"); break;
	case 4: printf(" ������"); break;
	case 5: printf(" ���"); break;
	case 6: printf(" ����"); break;
	case 7: printf(" ����"); break;
	case 8: printf(" �������"); break;
	case 9: printf(" ��������"); break;
	case 10: printf(" �������"); break;
	case 11: printf(" ������"); break;
	case 12: printf(" �������"); break;
	default: printf(" ��� ������������, ������� ������������ ����");
	}
	return 0;
}