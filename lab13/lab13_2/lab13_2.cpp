//Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей).
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	int i, N;
	float S;
	setlocale(LC_ALL, "Rus");
	cout << "введите число>>";
	cin >> N;
	S = 1;
	for (i = 1; i <= N; i++)
	{
		S = S * ( 1 + 0.1 * i );
	}
	cout << S;
	return 0;
}