//Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий N первых положительных нечетных чисел: 1, 3, 5,...
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, l;
	setlocale(LC_ALL, "Rus");
	l = 1;
	cout << "введите N>>";
	cin >> N;
	int *mass = new int[N];
	for (int i = 0; i < N; i++)
	{
		mass[i] = l;
		l = l + 2;
		cout << mass[i] << "\n";
	}
	return 0;
	delete[] mass; // очистка памяти
}