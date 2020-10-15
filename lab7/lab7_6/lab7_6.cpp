//Найти решение системы линейных уравнений вида 
//A1·x + B1·y = C1,
//A2·x + B2·y = C2,
#include <stdio.h>
#include <locale.h>
int main()
{
	float a1, b1, a2, b2, c1, c2, x, y;    //объявление переменных
	setlocale(LC_ALL, "Rus"); //функция локализации на русский язык
	printf("Введите a1, b1, c1, a2, b2, c2>>"); scanf_s("%f%f%f%f%f%f", &a1, &b1, &c1, &a2, &b2, &c2); //вывод запроса и чтение переменной
	y = (a2 * c1 - a1 * c2) / (a2 * b1 - a1 * b2);
	x = (c1 - b1 * y) / a1;
	printf("x=%.2f\ny=%.2f", x, y);
	return 0; //конец программы
}