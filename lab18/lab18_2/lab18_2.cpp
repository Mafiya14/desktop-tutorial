//Дан массив A размера N. Сформировать новый массив B того же размера по следующему правилу: 
//элемент B[K] равен среднему арифметическому элементов массива A с номерами от 1 до K.
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, i, t;
	setlocale(LC_ALL, "Rus");
	cout << "введите N>>";
	cin >> N;
	int* A = new int[N];
	int* B = new int[N];
	//инициализация массива А
	cout << "введите элементы массива A>>";
	for (i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	//обработка массивов
	for (i = 0; i < N; i++)
	{
		t = A[i];
		A[i] = B[i];
		B[i] = t;
	}
	//вывод массива В
	cout << "массив B>>";
	for (i = 0; i < N; i++)
	{
		cout << B[i] << " ";
	}
	delete[] A; // очистка памяти
	delete[] B;
	return 0;
}