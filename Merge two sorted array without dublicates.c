#include <stdio.h>
#include <stdlib.h>

int* mergeUnique(int *a, int n, int *b, int m, int *newSize) 
{
    int *res = malloc((n + m) * sizeof(int));
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j]) res[k++] = a[i++];
        else if (a[i] > b[j]) res[k++] = b[j++];
        else { res[k++] = a[i]; i++; j++; }
    }
    while (i < n) res[k++] = a[i++];
    while (j < m) res[k++] = b[j++];
    res = realloc(res, k * sizeof(int));
    *newSize = k;
    return res;
}

int main() {
    printf("Name:Ramesh\n usn:1SV24CS116\n");
    int n, m;
    printf("Enter size of two sorted arrays: ");
    scanf("%d%d", &n, &m);
    int *a = malloc(n * sizeof(int));
    int *b = malloc(m * sizeof(int));

    printf("Enter sorted elements for array A: ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter sorted elements for array B: ");
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    int newSize;
    int *merged = mergeUnique(a, n, b, m, &newSize);

    printf("Merged array: ");
    for (int i = 0; i < newSize; i++) printf("%d ", merged[i]);
    printf("\n");

    free(a); free(b); free(merged);
    return 0;
}
output:
Name:Ramesh
 usn:1SV24CS116
Enter size of two sorted arrays: 2
4
Enter sorted elements for array A: 44
56
Enter sorted elements for array B: 
77
99
88
55
Merged array: 44 56 77 99 88 55 


