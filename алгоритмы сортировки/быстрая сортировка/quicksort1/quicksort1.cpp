//программная реализация быстрой сортировки через циклы с предусловием
#include <stdio.h>
#include <stdlib.h>
int b; //индекс первого элемента массива
int e; //индекс последнего элемента массива
int l, r, arr[] = { -6, 1, 0, 5, 7, 8, 4, 9, -17, 12 };
int n = sizeof(arr) / sizeof(int); 
void qsort(int* arr, int b, int e) 
{
	if (b < e) 
	{
		int piv = arr[(b + e) / 2]; // номер опорного элемента
		int l = b; //индекс левого элемента
		int r = e; //индекс правого элемента
		while (l <= r) 
		{
			while (arr[l] < piv) l++; 
			while (arr[r] > piv) r--; 
			if (l <= r) 
			{
				int t = arr[l]; 
				arr[l] = arr[r]; 
				arr[r] = t; 
				l++; 
				r--; 
			}
		}
		qsort(arr, b, r); 
		qsort(arr, l, e); 
	}
}

int main()
{
		qsort(arr, 0, n - 1);
	for (int i = 0; i < n - 1; i++)
		printf("%d ", arr[i]);
}