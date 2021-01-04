//Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет.
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	float c;
	int i;
	setlocale(LC_ALL, "Rus");
	cout << "введите цену за 1 кг конфет>>";
	cin >> c;
	for (i = 1; i <= 10; i++)
	{
		cout << 0.1 * i << " кг = " << c * 0.1 * i << "\n";
	}
	return 0;
}