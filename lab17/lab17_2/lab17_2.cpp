//Дан целочисленный массив размера N, не содержащий одинаковых чисел. Проверить, образуют ли его элементы арифметическую прогрессию. 
//Если образуют, то вывести разность прогрессии, если нет — вывести 0.
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, d, i;
	setlocale(LC_ALL, "Rus");
	d = 0;
	cout << "введите N>>";
	cin >> N;
	int *mass = new int[N];
	cout << "введите элементы массива>>";
	cin >> mass[0];
	cin >> mass[1];
	d = mass[1] - mass[0];
	for (i = 2; i < N; i++)
	{
		cin >> mass[i];
		if (d != mass[i] - mass[i - 1]) d = 0;
	}
	cout << d;
	delete[] mass; // очистка памяти
	return 0;
}