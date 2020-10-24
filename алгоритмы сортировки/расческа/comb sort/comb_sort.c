#include <stdio.h>

int main() 
{
    int i, temp, step;
    int array[] = { 1, 4, 5, 0, 3, 2 };
    int n = sizeof(array) / sizeof(int);
    float k = 1.247;
    for (step = n - 1; step >= 1; step /= k) 
    {
        for (i = 0; i < n - step; i++) 
        {
            if (array[i] > array[i + step]) 
            {
                temp = array[i];
                array[i] = array[i + step];
                array[i + step] = temp;
            }
        }
    }
    printf("%d ", array[0]);
    printf("%d ", array[1]);
    printf("%d ", array[2]);
    printf("%d ", array[3]);
    printf("%d ", array[4]);
    printf("%d", array[5]);
    return 0;
}
