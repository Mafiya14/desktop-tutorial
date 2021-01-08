//Дан массив размера N. Перед каждым положительным элементом массива вставить элемент с нулевым значением.
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, i, k;
	bool flag;
	flag = 0;
	k = 0;
	setlocale(LC_ALL, "Rus");
	cout << "введите N>>";
	cin >> N;
	int* A = new int[N];
	cout << "введите элементы массива>>";
	for (i = 0; i < N; i++)
	{
		cin >> A[i];
		if (A[i] > 0) k++; //считаем кол-во положительных элементов
	}
	int* B = new int[N + k];
	int q;
	q = 0;
	for (i = 0; i < N + k; i++)
	{
		B[i] = A[q];
		if (A[q] > 0) //если элемент положительный
		{
			if (flag == 0) // если он попадается в первый раз, тогда на место этого элемента вносим 0 и сдвигаем оставшиеся элементы вправо
			{
				B[i] = 0;
				q--;
				flag = 1;
			}
			else flag = 0; //иначе обнуляем флаг
		}
		q++;
	}
	cout << "измененный массив>>";
	for (i = 0; i < N + k; i++)
	{
		cout << B[i] << " ";
	}
	delete[] A; // очистка памяти
	delete[] B;
	return 0;
}