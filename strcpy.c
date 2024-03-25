#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char dest[10];
    strcpy(dest, src);
    printf("Copied string: %s\n", dest);
    return 0;
}

