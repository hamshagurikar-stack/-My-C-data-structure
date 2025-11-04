
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4.,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index=3;
    if(index>=0&&index<n)
    {
        printf("%d ",arr[index]);
    }

}
output:
4
