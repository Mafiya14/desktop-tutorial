//Описать функцию Fact2(N) вещественного типа, вычисляющую двойной факториал: 
//N!!= 1·3·5·. ..·N, если N — нечетное;
//N!!= 2·4·6·. ..·N, если N — четное(N > 0 — параметр целого типа; 
//вещественное возвращаемое значение используется для того, чтобы избежать целочисленного переполнения при больших значениях N).

#include <iostream> 
#include <locale.h> 
using namespace std;

float Fact2 (int N)
{
	float s;
	int i;
	s = 1;
	if (N % 2 == 0) i = 2;
	else i = 1;
		while (N >= i)
		{
			s = s * i;
			i = i + 2;
		}
	return s;
}

int main()
{
	int i, N;
	setlocale(LC_ALL, "Rus");
	cout << "введите N>>";
	cin >> N;
	cout << Fact2(N);
	return 0;
}