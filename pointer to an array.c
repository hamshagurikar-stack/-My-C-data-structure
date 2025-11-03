#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int *ptr;
    ptr=arr;
    printf("Using pointer to access array elements:\n");
    for(int i=0;i<5;i++)
    {
        printf("Element %d: %d\n",i+1,*(ptr+i));
        
    }
    return 0;
}
Output:
Using pointer to access array elements:
Element 1: 1
Element 2: 2
Element 3: 3
Element 4: 4
Element 5: 5

