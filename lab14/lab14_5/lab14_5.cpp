//Даны целые положительные числа A и B. Найти их наибольший общий делитель (НОД), используя алгоритм Евклида
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int A, B;
	setlocale(LC_ALL, "Rus");
	cout << "введите A и B >>";
	cin >> A >> B;
	do 
	{
		if (A > B) A = A % B;
		else B = B % A;
	} while ((A != 0) and (B != 0));
	cout << (A + B);
	return 0;
}