//Даны три числа. Найти сумму двух наибольших из них
#include <stdio.h>
int main() {
	int a, b, c;
	printf("a, b and c>>"); scanf_s("%d%d%d", &a, &b, &c);
	if ((a > b) && (a > c)) {
		if (b > c) printf("%d", a + b);
		else printf("%d", a + c);
	}
	if ((b > a) && (b > c)) {
		if (a > c) printf("&d", b + a);
		else printf("&d", b + c);
	}
	if ((c > a) && (c > b)) {
		if (a > b) printf("%d", c + a);
		else printf("%d", c + b);
	}
	return 0;
}