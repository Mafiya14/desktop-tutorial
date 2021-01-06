//Дан массив A размера N. Найти минимальный элемент из его элементов с четными номерами: A2, A4, A6,
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, min, i;
	setlocale(LC_ALL, "Rus");
	
	cout << "введите N>>";
	cin >> N;
	int* A = new int[N];
	cout << "введите элементы массива>>";
	for (i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	min = A[0];
	for (i = 2; i < N; i = i + 2)
	{
		if (min > A[i]) min = A[i];
	}
	cout << min;
	delete[] A; // очистка памяти
	return 0;
}