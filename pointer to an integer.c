#include <stdio.h>

int main() {
    int num = 10;    
    int *ptr;        

    ptr = &num;     

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr (address of num): %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);  

    return 0;
}
Out put:
Value of num: 10
Address of num: 0x7ffeed82f754
Value of ptr (address of num): 0x7ffeed82f754
Value pointed to by ptr: 10
