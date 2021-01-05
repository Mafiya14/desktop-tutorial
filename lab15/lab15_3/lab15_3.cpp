//Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного между двумя окружностями с общим центром 
//и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). С ее помощью найти площади трех колец, для которых даны внешние и внутренние радиусы.
#include <iostream> 
#include <locale.h> 
using namespace std;

float RingS(float X)
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