//Даны целые числа N (> 2), A и B. Сформировать и вывести целочисленный массив размера N, 
//первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, A, B;
	setlocale(LC_ALL, "Rus");
	cout << "введите N, A и B>>";
	cin >> N >> A >> B;
	int* mass = new int[N];
	mass[0] = A; cout << mass[0] << "\n"; 
	mass[1] = B; cout << mass[1] << "\n";
	for (int i = 2; i < N; i++)
	{
		if (i % 2 != 0)
		{
			B = A + B;
			mass[i] = B;
		}
		else
		{
			A = B + A;
			mass[i] = A;
		}
		cout << mass[i] << "\n";
	}
	delete[] mass; // очистка памяти
	return 0;
}