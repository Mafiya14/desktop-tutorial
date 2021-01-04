//Даны положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). 
//Не используя операции умножения и деления, найти длину незанятой части отрезка A.
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int a, b, c, i, j;
	setlocale(LC_ALL, "Rus");
	cout << "введите два числа (А > В) >>";
	cin >> a >> b;
	while (a >= b) 
	{
		a = a - b;
	}
	cout << a;
	return 0;
}