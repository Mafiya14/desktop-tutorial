//Дан целочисленный массив размера N, содержащий ровно два одинаковых элемента. Найти номера одинаковых элементов и вывести эти номера в порядке возрастания
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, i;
	bool flag;
	setlocale(LC_ALL, "Rus");
	flag = 0;
	cout << "введите N>>";
	cin >> N;
	int* A = new int[N];
	cout << "введите элементы массива>>";
	for (i = 0; i < N; i++)
	{
		cin >> A[i];

	}
	i = 0;
	do {
		for (int j = 0; j < N; j++)
		{
			if (A[i] == A[j] && i != j)
			{
				if (i < j) cout << i << j;
				else cout << j << i;
				flag = 1;
			}
		}
		i++;
	} while (flag != 1);
	delete[] A; // очистка памяти
	return 0;
}