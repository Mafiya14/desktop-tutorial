//Дано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии. 
//Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии: A, A·D, A·D^2 , A·D^3 , ...
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, A, D;
	setlocale(LC_ALL, "Rus");
	cout << "введите N, A и D>>";
	cin >> N >> A >> D;
	int* mass = new int[N];
	for (int i = 0; i < N; i++)
	{
		mass[i] = A * pow(D, i);
		cout << mass[i] << "\n";
	}
	return 0;
}