#include<stdio.h>
#define CAP 100
int main()
{
    int a[CAP]={2,4,5};
    int n = 3;
    int x=8;
    if(n<CAP){
        a[n]=x;
        n++;
    }
    else{
        printf("Array is full");
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
output:
2 4 5 8 
