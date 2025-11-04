// Fixed capacity by using macro function called CAP
#include<stdio.h>
#define CAP 40
void Ramesh(int a[],int n);
void Ramesh(int a[CAP],int n)
{
    for(int i=0;i<n&&i<CAP;i++)
{
    a[i]=i;
    printf("%d ",a[i]);
    }
}
int main()
{
    int a[CAP],n=130;
    Ramesh(a,n);
}
Output:
   0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 
