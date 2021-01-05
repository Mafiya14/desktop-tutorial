//Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения:
//−1, если X < 0; 0, если X = 0; 1, если X > 0.
#include <iostream> 
#include <locale.h> 
using namespace std;

int Sign(float X)
{
	int s;
	if (X < 0) s = -1;
	if (X == 0) s = 0;
	if (X > 0) s = 1;
	return s;
}

int main()
{
	float X;
	int s;
	setlocale(LC_ALL, "Rus");
	cout << "введите X>>";
	cin >> X;
	s = Sign(X);
	cout << s;
	return 0;
}