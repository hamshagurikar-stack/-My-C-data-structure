#include <stdio.h>
#define CAP 10

int main() {
    int a[CAP] = {10, 20, 30, 40, 50};
    int n = 5;   

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    if (n > 0) {
        n--;  
    } else {
        printf("Array is empty. Cannot delete.\n");
        return 0;
    }

    printf("Array after deleting from end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
output:

