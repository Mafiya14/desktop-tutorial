#include <stdio.h>

int main() {
    int i, j, min, buf, N = 7;
    int arr[] = { 6, 4, 1, 5, 3, 7, 2 };

    for (i = 0; i < N - 1; i++) {
        for (j = i + 1, min = i; j < N; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        buf = arr[i];
        arr[i] = arr[min];
        arr[min] = buf;
    }
    printf("%d %d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6]);
    return 0;
}
