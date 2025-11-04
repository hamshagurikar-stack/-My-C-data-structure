#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, *p, sum = 0, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));
    if (!arr) { printf("Memory allocation failed!\n"); return 1; }

    printf("Enter %d integers:\n", n);
    for (p = arr; p < arr + n; p++)
        scanf("%d", p);

    max = *arr;
    for (p = arr; p < arr + n; p++) {
        sum += *p;
        if (*p > max) max = *p;
    }

    printf("Sum = %d, Max = %d\n", sum, max);
    free(arr);
    return 0;
}
Output:
Enter number of elements: 2
Enter 2 integers:
33
77
Sum = 110, Max = 77
