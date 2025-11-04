#include<stdio.h>
#define CAP 10
int main()
{
    int a[CAP]={20,30,40};
    int n=3;
    int x=10;
    if(n<CAP){
        for(int i=n;i>0;i--){
            a[i]=a[i-1];
        }
        a[0]=x;
        n++;
    }else{
        printf("full array\n");
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}
output:
10 20 30 40 
