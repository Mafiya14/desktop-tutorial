//Даны целые числа N (> 2), A и B. Сформировать и вывести целочисленный массив размера N, 
//первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, A, B, s;
	setlocale(LC_ALL, "Rus");
	cout << "введите N, A и B>>";
	cin >> N >> A >> B;
	int* mass = new int[N];
	mass[0] = A; cout << mass[0] << "\n"; 
	mass[1] = B; cout << mass[1] << "\n";
	s = mass[0] + mass[1];
	mass[2] = s; cout << mass[2] << "\n";
	for (int i = 3; i < N; i++)
	{
		s = s + mass[i - 1];
		mass[i] = s;
		cout << mass[i] << "\n";
	}
	delete[] mass; // очистка памяти
	return 0;
}