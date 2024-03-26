#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "Hello";

    // Compare str1 and str2
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal\n");
    } else {
        printf("str1 and str2 are not equal\n");
    }

    // Compare str1 and str3
    if (strcmp(str1, str3) == 0) {
        printf("str1 and str3 are equal\n");
    } else {
        printf("str1 and str3 are not equal\n");
    }

    return 0;
}
