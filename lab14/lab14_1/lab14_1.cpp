//Даны целые положительные числа A и B (A < B). Вывести все целые числа от A до B включительно; 
//при этом каждое число должно выводиться столько раз, каково его значение (например, число 3 выводится 3 раза).
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int a, b, c, i, j;
	setlocale(LC_ALL, "Rus");
	cout << "введите два числа (А<В) >>";
	cin >> a >> b;
	c = a - 1;
	for (i = 1; i <= (b - a + 1); i++)
	{
		c++;
		for (j = 1; j <= c; j++)
		{
			cout << c << " ";
		}
	}
	return 0;
}