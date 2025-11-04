#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int data;
    struct Node *next;
} 
Node;

Node* insert(Node *head, int val) 
{
    Node *newNode = malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = head;
    return newNode;
}

Node* deleteKthFromEnd(Node *head, int k) 
{
    Node *fast = head, *slow = head, *prev = NULL;
    for (int i = 0; i < k; i++) {
        if (!fast) return head;
        fast = fast->next;
    }
    while (fast) {
        fast = fast->next;
        prev = slow;
        slow = slow->next;
    }
    if (!prev) head = head->next;
    else prev->next = slow->next;
    free(slow);
    return head;
}

void printList(Node *head) {
    for (; head; head = head->next)
        printf("%d -> ", head->data);
    printf("NULL\n");
}

void freeList(Node *head) {
    Node *tmp;
    while (head) {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main() 
{
    printf("name:Ramesh\nusn:1SV24CS116\n");
    Node *head = NULL;
    for (int i = 5; i >= 1; i--)
        head = insert(head, i);

    printList(head);
    head = deleteKthFromEnd(head, 2);
    printList(head);
    freeList(head);
    return 0;
}
output:
name:Ramesh
usn:1SV24CS116
1 -> 2 -> 3 -> 4 -> 5 -> NULL
1 -> 2 -> 3 -> 5 -> NULL


