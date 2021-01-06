//Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). Найти среднее арифметическое элементов массива с номерами от K до L включительно.
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, K, L, i;
	float s;
	setlocale(LC_ALL, "Rus");
	s = 0;
	cout << "введите N, K и L>>";
	cin >> N >> K >> L;
	int* A = new int[N];
	cout << "введите элементы массива>>";
	for (i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	for (i = K; i <= L; i++)
	{
		s = s + A[i];
	}
	cout << s / (L - K + 1);
	delete[] A; // очистка памяти
	return 0;
}