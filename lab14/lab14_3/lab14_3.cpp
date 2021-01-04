//Дано целое число N (> 1). Вывести наименьшее из целых чисел K, для которых сумма 1 + 2 + . . . + K будет больше или равна N, и саму эту сумму.
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, K, S;
	setlocale(LC_ALL, "Rus");
	cout << "введите число N>>";
	cin >> N;
	K = 0;
	S = 0;
	while (N > S)
	{
		K = K + 1;
		S = S + K;
	}
	cout << K << " " << S;
	return 0;
}