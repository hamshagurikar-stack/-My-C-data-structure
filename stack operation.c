#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int value){
    if(top==MAX -1)
    printf("Stack is Underflow");
    else{
        stack[++top]=value;
        printf("pushed\n",value);
    }
}
void pop(){
    if(top==-1)
    printf("STack is Under flow");
    else{
        printf("popped\n",stack[top]);
        top--;
    }
}
void peek(){
    if(top==-1)
    printf("stack is empty");
    else{
        printf("top element %d\n",stack[top]);
    }
}
void display(){
    if(top==-1)
    printf("stack is empty");
    else{
        printf("stack element ");
        for(int i=top;i>=0 ;i--)
        printf("%d ",stack[i]);
    }
    printf("\n ");
}
int main(){
    push(10);
    push(3);
    push(40);
    push(50);
    display();
    pop();
    display();
    pop();
    display();
    return 0;
}
output:
pushed
pushed
pushed
pushed
stack element 50 40 3 10 
 popped
stack element 40 3 10 
 popped
stack element 3 10 
 






























































