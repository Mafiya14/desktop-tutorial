//Дано вещественное число A и целое число N (> 0). Используя один цикл, найти сумму 1 + A + A^2 + A^3 + . . . + A^N
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	int i, N;
	float A, S;
	setlocale(LC_ALL, "Rus");
	cout << "введите вещественное число А и целое число N>>";
	cin >> A >> N;
	S = 1;
	for (i = 1; i <= N; i++)
	{
		S = S + pow(A, i);
	}
	cout << S;
	return 0;
}