//Дан массив A размера N. Вывести его элементы в следующем порядке: A(1), A(N) , A(2), A(N−1), A(3), A(N−2),
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
	int *A = new int[N];
	cout << "введите элементы массива>>";
	for (i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	for (i = 0; i < N; i++)
	{

		if (i % 2 == 0) cout << A[k] << "\n";
		else
		{
			cout << A[N - k -1] << "\n";
			k++;
		}
	}
	delete[] A; // очистка памяти
	return 0;
}