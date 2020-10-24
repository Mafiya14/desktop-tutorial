//Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C».
#include <stdio.h>
#include <locale.h>
int main() {
	int a, b, c;
	setlocale(LC_ALL, "Rus");
	printf(">>"); scanf_s("%d%d%d", &a, &b, &c);
	if ((a < b) && (b < c)) printf("yes");
	else printf("no");
	return 0;
}