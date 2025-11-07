#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is full\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        printf("%d inserted\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("%d deleted\n", queue[front]);
        front++;
        if (front > rear) {  // Reset the queue
            front = rear = -1;
        }
    }
}

void display() {
    if (front == -1)
        printf("Queue is empty\n");
    else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    enqueue(40);
    enqueue(50);
    enqueue(60); // Should show queue full
    display();
    return 0;
}
10 inserted
20 inserted
30 inserted
Queue elements: 10 20 30 
10 deleted
Queue elements: 20 30 
40 inserted
50 inserted
Queue is full
Queue elements: 20 30 40 50 


