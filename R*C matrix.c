#include <stdio.h>
#include <stdlib.h>

int main() {
    int R, C;
    printf("Enter rows and columns: ");
    scanf("%d%d", &R, &C);

    int *mat = (int*)malloc(R * C * sizeof(int));
    if (!mat) return 1;

    printf("Enter elements:\n");
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", mat + i*C + j);

    printf("Transpose:\n");
    for (int j = 0; j < C; j++) {
        for (int i = 0; i < R; i++)
            printf("%d ", *(mat + i*C + j));
        printf("\n");
    }

    free(mat);
    return 0;
}
output:
Enter rows and columns: 2
3
Enter elements:
1 2 3
0 9 8
Transpose:
1 0 
2 9 
3 8 



