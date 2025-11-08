#include <stdio.h>

#define SIZE 10

int hashTable[SIZE];

// Hash function
int hashFunction(int key) {
    return key % SIZE;
}

// Insert function using linear probing
void insert(int key) {
    int index = hashFunction(key);
    int i = 0;

    // Linear probing to find empty slot
    while (hashTable[(index + i) % SIZE] != -1) {
        i++;
        if (i == SIZE) {
            printf("Hash table is full! Cannot insert %d\n", key);
            return;
        }
    }

    hashTable[(index + i) % SIZE] = key;
    printf("Inserted %d at index %d\n", key, (index + i) % SIZE);
}

// Display function
void display() {
    printf("\nHash Table:\n");
    for (int i = 0; i < SIZE; i++) {
        if (hashTable[i] != -1)
            printf("Index %d -> %d\n", i, hashTable[i]);
        else
            printf("Index %d -> [empty]\n", i);
    }
}

int main() {
    // Initialize hash table with -1 (empty)
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    // Insert some keys
    insert(10);
    insert(20);
    insert(30);
    insert(25);
    insert(35);
    insert(15);

    // Display hash table
    display();

    return 0;
}
output:
Inserted 10 at index 0
Inserted 20 at index 1
Inserted 30 at index 2
Inserted 25 at index 5
Inserted 35 at index 6
Inserted 15 at index 7

Hash Table:
Index 0 -> 10
Index 1 -> 20
Index 2 -> 30
Index 3 -> [empty]
Index 4 -> [empty]
Index 5 -> 25
Index 6 -> 35
Index 7 -> 15
Index 8 -> [empty]
Index 9 -> [empty]


=== Code Executi
