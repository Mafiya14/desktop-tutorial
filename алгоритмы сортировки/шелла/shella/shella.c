#include <stdio.h>

int main()
{
	int i, x, d, j;
	int a[] = { 1, 4, 6, 7, 8, 3 };
	int n = sizeof(a) / sizeof(int);
	for (d = n / 2; d > 0; d /= 2) {
		for (i = d; i < n; i++) {
			x = a[i];
			for (j = i; j >= d; j -= d) {
				if (x < a[j - d])
					a[j] = a[j - d];
				else break;
			}
			a[j] = x;
		}
		printf("%d %d %d %d %d %d", a[0], a[1], a[2], a[3], a[4], a[5]);
		return 0;
	}
}
