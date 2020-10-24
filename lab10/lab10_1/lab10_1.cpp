//Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы неравенства A > 2 и B ≤ 3»
#include <stdio.h>
#include <locale.h>
int main() {
	int a, b;
	setlocale(LC_ALL, "Rus");
	printf(">>"); scanf_s("%d%d", &a, &b);
	if ((a > 2) and (b <= 3)) printf("yes");
	else printf("no");
	return 0;
}