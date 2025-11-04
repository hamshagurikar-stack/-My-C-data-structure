#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strdup(char *src) 
{
    int len = strlen(src) + 1;
    char *dup = (char*)malloc(len);
    if (!dup) return NULL;

    char *p = dup;
    while ((*p++ = *src++));
    return dup;
}

int main() 
{
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    char *copy = my_strdup(str);
    printf("Duplicate: %s\n", copy);

    free(copy);
    return 0;
}
Output:
Enter string: Ramesh
Duplicate: Ramesh

