#include <stdio.h>
#include <stdlib.h>
int b; //
int e; //
int l, r, t, arr[] = { -6, 1, 0, 5, 7, 8, 4, 9, -17, 12 };
int n = sizeof(arr) / sizeof(int); 
void qsort(int* arr, int b, int e)
{
	if (b < e) 
	{
		int piv = arr[(b + e) / 2];
		int r = e;
		for (l = b; l <= r; l++) 
		{
			for (int i = l; i < n; i++) 
				if (arr[l] < piv) 
					l++; 
				else
					break; 
			for (int i = r; i > 0; i--) 
				if (arr[r] > piv) 
					r--; 
				else
					break; 
			if (l <= r) 
			{
				int t = arr[l];
				arr[l] = arr[r];
				arr[r] = t;
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