#include <stdio.h>

typedef struct {
    int (*fp)(int, int);
} MathOp;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    MathOp op1 = { &add }; // Assign add() to the function pointer in struct
    MathOp op2 = { &subtract }; // Assign subtract() to the function pointer in struct
    int result1 = op1.fp(3, 5); // Call add() using the function pointer in struct
    printf("%d\n", result1); // Output: 8
    int result2 = op2.fp(8, 2); // Call subtract() using the function pointer in struct
    printf("%d\n", result2); // Output: 6
    return 0;
}