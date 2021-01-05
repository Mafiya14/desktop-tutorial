//Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти, в которой находится точка с ненулевыми 
//вещественными координатами (x, y). С помощью этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами
#include <iostream> 
#include <locale.h> 
using namespace std;

int Quarter(float x, float y)
{
	int s;
	if (x > 0 && y > 0) s = 1;
	if (x > 0 && y < 0) s = 2;
	if (x < 0 && y < 0) s = 3;
	if (x < 0 && y > 0) s = 4;
	return s;
}

int main()
{
	int i, x, y;
	setlocale(LC_ALL, "Rus");
	for (i = 1; i <= 3; i++)
	{
		cout << "введите координаты " << i << " точки>>";
		cin >> x >> y;
		cout << Quarter(x, y) << " четверть\n";
	}
	return 0;
}