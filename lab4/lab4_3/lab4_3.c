//���� ��� ����� a � b. ����� �� ������� ��������������: (a + b)/2.
#include <stdio.h>  //���������� ���������� ����� ������
#include <locale.h> //���������� ���������� ��� �����������
int main()          //����� ����� � ���������
{
	float a, b;    //���������� ����������
	setlocale(LC_ALL, "Rus"); //������� ����������� �� ������� ����
	printf("������� a>>"); scanf_s("%f", &a); //����� ������� � ������ ����������
	printf("������� b>>"); scanf_s("%f", &b);
	printf("������� ��������������=%f", (a + b) / 2); //����� ��������
	return 0; //����� ���������
}