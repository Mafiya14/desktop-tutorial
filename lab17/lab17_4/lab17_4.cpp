//Дан массив размера N. Найти номер его последнего локального максимума (локальный максимум — это элемент, который больше любого из своих соседей).
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, max, i;
	setlocale(LC_ALL, "Rus");
	max = 0;
	cout << "введите N>>";
	cin >> N;
	int *A = new int[N];
	cout << "введите элементы массива>>";
	cin >> A[0]; cin >> A[1];
	for (i = 2; i < N; i++)
	{
		cin >> A[i];
		if (A[i - 1] > A[i] && A[i - 1] > A[i - 2]) max = i - 1;
	}
	if (max != 0) cout << max;
	else cout << "локальный максимум отсутствует";
	delete[] A; // очистка памяти
	return 0;
}