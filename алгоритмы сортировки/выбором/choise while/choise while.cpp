#include <stdio.h>

int main() {
    int i = 0, j, min, buf, N = 7;
    int arr[] = { 6, 4, 1, 5, 3, 7, 2 };
    while (i < N - 1) {
        j = i + 1;
        min = i;
        while (j < N) {
            if (arr[j] < arr[min])
                min = j;
            j++;
        }
        buf = arr[i];
        arr[i] = arr[min];
        arr[min] = buf;
        i++;
    }
    for (i = 0; i < N; i++)
        printf("%d ", arr[i]);
    return 0;
}