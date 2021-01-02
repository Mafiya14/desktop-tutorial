#include <stdio.h>
int main() {
	int a, b;
	printf("a and b>>"); scanf_s("%d%d", &a, &b);
	if (a == b) {
		a = 0; b = 0;
	}
	else if (a > b) b = a;
	else a = b;
	printf("%d %d", a, b);
	return 0;
}