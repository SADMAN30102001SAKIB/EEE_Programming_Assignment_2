#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int (*func_ptr[3])(int, int) = {add, subtract, multiply};

    printf("Enter two numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Result of addition: %d\n", func_ptr[0](a, b));
    printf("Result of subtraction: %d\n", func_ptr[1](a, b));
    printf("Result of multiplication: %d\n", func_ptr[2](a, b));

    return 0;
}