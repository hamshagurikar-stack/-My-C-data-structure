//Deleting at begginning
#include<stdio.h>
#define CAP 20
int main()
{
    printf("Name:Ramesh\nusn:1SV24CS116\n");
    int a[CAP]={10,20,30,40,50,60};
    int n = 5;
    if(n>0)
    {
        for(int i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        n--;
    }
    else{
        printf("array is empty\n");
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
output:
Name:Ramesh
usn:1SV24CS116
20 30 40 50 


    
    
    
    
    
    
    
