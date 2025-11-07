#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1)
        printf("Queue is Full\n");
    else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        printf("%d inserted\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear)
        printf("Queue is Empty\n");
    else {
        printf("%d deleted\n", queue[front]);
        front++;
    }
}

void peek() {
    if (front == -1 || front > rear)
        printf("Queue is Empty\n");
    else
        printf("Front element = %d\n", queue[front]);
}

void display() {
    if (front == -1 || front > rear)
        printf("Queue is Empty\n");
    else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue(30);
    display();
    peek(40);
    display();
    return 0;
}
output:
10 inserted
20 inserted
30 inserted
Queue elements: 10 20 30 
10 deleted
Queue elements: 20 30 
Front element = 20
Queue elements: 20 30 






























