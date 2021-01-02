//На плоскости расположены три точки: A, B, C. 
//Определить, какая из двух последних точек (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A.
#include <stdio.h>
#include <math.h>
int main() {
	int xa, ya, xb, yb, xc, yc;
	float s1, s2;
	printf("coordinates a, b and c>>"); scanf_s("%d%d%d%d%d%d", &xa, &ya, &xb, &yb, &xc, &yc);
	s1 = sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));
	s2 = sqrt(pow((xc - xa), 2) + pow((yc - ya), 2));
	if (s1 < s2) printf("B(%d;%d),%f", xb, yb, s1);
	else printf("C(%d;%d),%f", xc, yc, s2);
	return 0;
}