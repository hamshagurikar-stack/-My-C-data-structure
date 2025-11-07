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
        // Reset when queue becomes empty
        if (front > rear)
            front = rear = -1;
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

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();

    enqueue(1);
    peek();
    display();

    return 0;
}
output:
1 inserted
2 inserted
3 inserted
4 inserted
5 inserted
Queue elements: 1 2 3 4 5 
1 deleted
2 deleted
3 deleted
4 deleted
5 deleted
Queue is Empty
1 inserted
Front element = 1
Queue elements: 1 

