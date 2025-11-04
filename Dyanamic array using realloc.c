#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int *data;
    int size, capacity;
} Vector;

void init(Vector *v) {
    v->size = 0;
    v->capacity = 2;
    v->data = (int*)malloc(v->capacity * sizeof(int));
}

void push(Vector *v, int value) {
    if (v->size == v->capacity) {
        v->capacity *= 2;
        v->data = (int*)realloc(v->data, v->capacity * sizeof(int));
    }
    v->data[v->size++] = value;
}

void print(Vector *v) {
    for (int i = 0; i < v->size; i++)
        printf("%d ", v->data[i]);
    printf("\n");
}

int main() {
    printf("name:Ramesh\n usn:1SV24CS116\n");
    Vector v;
    init(&v);

    for (int i = 1; i <= 10; i++)
        push(&v, i * 10);
  printf(&v);
  free(v.data);
    return 0;
}
output:
name:Ramesh
 usn:1SV24CS116
10 20 30 40 50 60 70 80 90 100 


