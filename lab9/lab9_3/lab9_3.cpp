#include <stdio.h>

int main()
{
	int a, b;
	char c;
	printf("blabla >>");
	scanf_s("%d%d%c", &a, &b, &c);
	printf("your input %d %d %c", a, b, c);
	return(0);
}