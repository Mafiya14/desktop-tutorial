//Дан массив размера N, все элементы которого, кроме первого, упорядочены по возрастанию.Сделать массив упорядоченным, переместив первый элемент на новую позицию.
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, i, t, j;
	setlocale(LC_ALL, "Rus");
	j = 0;
	cout << "введите N>>";
	cin >> N;
	int* A = new int[N];
	cout << "введите элементы массива A>>";
	for (i = 0; i < N; i++)
	{
		cin >> A[i];
		if (A[j] > A[i])
		{
			t = A[i];
			A[i] = A[j];
			A[j] = t;
			j = i;
		}
	}
	cout << "измененный массив A>>";
	for (i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
	delete[] A; // очистка памяти
	return 0;
}