#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main() {
    int (*operation)(int, int);
    int result;

    operation = add;
    result = operation(5, 3);
    printf("Result of addition: %d\n", result);

    operation = subtract;
    result = operation(5, 3);
    printf("Result of subtraction: %d\n", result);

    operation = multiply;
    result = operation(5, 3);
    printf("Result of multiplication: %d\n", result);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}