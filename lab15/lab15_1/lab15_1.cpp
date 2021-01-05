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
	float A; 
	int i;
	setlocale(LC_ALL, "Rus");
	for (i = 1; i <= 5; i++)
	{
		cout << "введите число>>";
		cin >> A;
		cout << "третья степень>>" << PowerA3(A) << "\n";
	}
	return 0;
}