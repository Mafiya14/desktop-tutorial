//Дано целое число N (> 1), являющееся числом Фибоначчи: N = Fk. Найти целое число K — порядковый номер числа Фибоначчи N.
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, K, a, b; //a, b - два рядом стоящие числа
	setlocale(LC_ALL, "Rus");
	cout << "введите N >>";
	cin >> N;
	a = 0; b = 1; K = 2;
	while (N != a && N != b)
	{
		K = K + 1;
		if (K % 2 == 0) b = a + b;
		else a = b + a;
	}
	cout << K;
	return 0;
}