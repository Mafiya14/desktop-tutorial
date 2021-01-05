//Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного между двумя окружностями с общим центром 
//и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). С ее помощью найти площади трех колец, для которых даны внешние и внутренние радиусы.
#include <iostream> 
#include <locale.h> 
const double PI = 3.141592653589793;

using namespace std;

float RingS(float R1, float R2)
{
	float s;
	s = (pow(R1, 2) - pow(R2, 2)) * PI;
	return s;
}

int main()
{
	float R1, R2, s;
	int i;
	setlocale(LC_ALL, "Rus");
	for (i = 1; i <= 3; i++)
	{
		cout << "введите R1 и R2>>";
		cin >> R1 >> R2;
		s = RingS(R1, R2);
		cout << s << "\n";
	}
	return 0;
}