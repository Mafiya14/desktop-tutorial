//Дан массив A размера N. Сформировать новый массив B того же размера по следующему правилу: 
//элемент B[K] равен среднему арифметическому элементов массива A с номерами от 1 до K.
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, i;
	float s;
	setlocale(LC_ALL, "Rus");
	s = 0;
	cout << "введите N>>";
	cin >> N;
	float* A = new float[N];
	float* B = new float[N];
	cout << "введите элементы массива A>>";
	for (i = 0; i < N; i++)
	{
		cin >> A[i];
		s = s + A[i];
		B[i] = s / (i + 1);
	}
	cout << "массив B>>";
	for (i = 0; i < N; i++)
	{
		cout << B[i] << " ";
	}
	delete[] A; // очистка памяти
	delete[] B;
	return 0;
}