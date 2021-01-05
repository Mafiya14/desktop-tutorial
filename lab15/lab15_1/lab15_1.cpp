//Описать функцию PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B (A — входной, B — выходной параметр; 
//оба параметра являются вещественными). С помощью этой функции найти третьи степени пяти данных чисел.
#include <iostream> 
#include <locale.h> 
using namespace std;

float PowerA3 (float A)
{
	float B;
	B = pow(A, 3);
	return B;
}

int main()
{
	float A, B; 
	setlocale(LC_ALL, "Rus");
	cout << "введите A>>";
	cin >> A;
	B = PowerA3(A);
	cout << B;
	return 0;
}