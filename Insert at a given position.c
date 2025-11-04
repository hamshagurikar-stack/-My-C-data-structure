#include <stdio.h>
#define CAP 10

int main()
{
    printf("Name:Ramsh\nusn:1SV24CS116\n");
    int a[CAP] = {10, 20, 30, 40};
    int n = 4;        
    int x = 25;       
    int pos = 2;      

    if (n < CAP && pos >= 0 && pos <= n)
    {
        for (int i = n; i > pos; i--)
        {
            a[i] = a[i - 1];
        }
        a[pos] = x;
        n++;
    } else {
        printf("Invalid position or array full\n");
        return 0;
    }

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
output:
Name:Ramsh
usn:1SV24CS116
Array after insertion:
10 20 25 30 40 



