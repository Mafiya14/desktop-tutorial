//Дан массив A размера N. Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров, 
//а затем — элементы с четными номерами в порядке убывания номеров
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, k, i;
	setlocale(LC_ALL, "Rus");
	k = 0;
	cout << "введите N>>";
	cin >> N;
	int* A = new int[N];
	cout << "введите элементы массива>>";
	for (i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	for (i = 1; i < N; i = i + 2)
	{
		cout << A[i] << " ";
	}
	for (i = N - 1; i >= 0; i = i - 2)
	{
		if (i % 2 != 0)
		{
			k = i - 1;
			cout << A[k] << " ";
		}
		else cout << A[i] << " ";
	}
	delete[] A; // очистка памяти
	return 0;
}