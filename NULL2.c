#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }
    *ptr = 10;
    printf("The value of ptr is %d.\n", *ptr);
    free(ptr);
    ptr = NULL;
    if (ptr == NULL) {
        printf("The pointer is now NULL.");
    }
    return 0;
}