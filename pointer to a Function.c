#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int (*ptr)(int ,int);
    int result;
    ptr=&add;
    result=ptr(10,20);
    printf("Result of 10+20=%d\n",result);
    return 0;
}
Output:
Result of 10+20=30
