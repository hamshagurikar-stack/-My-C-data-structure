#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}
void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void deleteAtPosition(struct Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node* temp = *head;
    if (position == 1) {
        *head = temp->next;
        free(temp);
        printf("Node at position 1 deleted successfully.\n");
        return;
    }
    struct Node* prev = NULL;
    int i;
    for (i = 1; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Invalid position! No node found at position %d.\n", position);
        return;
    }
    prev->next = temp->next;
    free(temp);

    printf("Node at position %d deleted successfully.\n", position);
}
int main() {
    struct Node* head = NULL;
    int pos;
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);
    insertEnd(&head, 50);

    printf("Original Linked List:\n");
    display(head);

    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    deleteAtPosition(&head, pos);

    printf("\nLinked List after deletion:\n");
    display(head);

    return 0;
}
output:
Original Linked List:
Linked List: 10 -> 20 -> 30 -> 40 -> 50 -> NULL
