#include <stdio.h>
#include <stdlib.h>

char* getLine() {
    char *str = NULL;
    int c, size = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
        str = realloc(str, size + 2);
        str[size++] = c;
    }
    if (str) str[size] = '\0';
    return str;
}

int main() {
    printf("Enter a line: ");
    char *line = getLine();
    printf("You entered: %s\n", line);
    free(line);
    return 0;
}
output:
Enter a line: SIET
You entered: SIET

