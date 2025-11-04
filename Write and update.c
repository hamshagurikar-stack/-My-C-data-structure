#include<stdio.h>
int main()
{
    int a[]={2,4,5,6,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    int index=3;
    int newVal=88;
    if(index>=0&&index<n){
    a[index]=newVal;
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }
    else{
            printf("out of the array");
        }
    }
output:
2 4 5 88 7 8 
