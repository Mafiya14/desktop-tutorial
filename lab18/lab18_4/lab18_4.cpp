//Дан массив размера N. Обнулить элементы массива, расположенные между его минимальным и максимальным элементами (не включая минимальный и максимальный элементы
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, i, k;
	float s;
	setlocale(LC_ALL, "Rus");
	k = 0;
	cout << "введите N>>";
	cin >> N;
	int* A = new int[N];
	cout << "введите элементы массива A>>";
	for (i = 0; i < N; i++)
	{
		cin >> A[i];
		if (A[i] % 2 != 0 && i >= k) k = i; //номер последнего нечетного элемента
	}
	cout << "измененный массив A>>";
	for (i = 0; i < N; i++)
	{
		if (A[i] % 2 != 0) A[i] = A[i] + A[k];
		cout << A[i] << " ";
	}
	delete[] A; // очистка памяти
	return 0;
}