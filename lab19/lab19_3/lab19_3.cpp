//Дан целочисленный массив размера N. Удалить из массива все элементы, встречающиеся ровно два раза, и вывести размер полученного массива и его содержимое.
#include <iostream> 
#include <locale.h> 
using namespace std;

void shift(int i, int N, int* A)
{
	for (int j = i; j < N; j++)
	{
		A[j] = A[j + 1]; //записываем, игнорируя(тем самым удаляя) значение элемента, которому был равен текущий элемент
	}
}
int main()
{
	int N, i;
	setlocale(LC_ALL, "Rus");
	cout << "введите N>>";
	cin >> N;
	int* A = new int[N];
	cout << "введите элементы массива A>>";
	for (i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	cout << "введите элемент, который надо удалить в массиве A>>";
	cin >> i;
	delete[i] A;

	cout << "измененный массив A>>";
	for (i = 0; i < (N-1); i++)
	{
		cout << A[i] << " ";
	}
	delete[] A; // очистка памяти
	return 0;
}