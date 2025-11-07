#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize - 1; i++) 
    {
        for (int j = i + 1; j < numsSize; j++)
         {
            if (nums[i] + nums[j] == target) 
            {
                result[0] = i;
                result[1] = j;
                return result; 
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
int main() {
    int nums[] = {3, 2, 4};
    int target = 6;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    int* indices = twoSum(nums, numsSize, target, &returnSize);
    if (indices != NULL) {
        printf("[%d, %d]\n", indices[0], indices[1]);
        free(indices);
    } else {
        printf("No solution found.\n");
    }
    
    return 0;
}
