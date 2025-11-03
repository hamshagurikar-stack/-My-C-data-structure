#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0];  
    for (int i = 1; i < n; i++) {  
        if (arr[i] > max) {
            max = arr[i];  
        }
    }
    return max;
}

int main() {
    int arr[] = {10, 20, 50, 40, 30};  
    int n = sizeof(arr) / sizeof(arr[0]);  

    int max = findMax(arr, n);  
    printf("Maximum element: %d\n", max);

    return 0;
}
Expected Output:
yaml
Maximum element: 50
