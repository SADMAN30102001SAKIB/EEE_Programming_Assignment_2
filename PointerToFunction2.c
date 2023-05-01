#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int calculate(int (*fp)(int, int), int a, int b) {
    return fp(a, b);
}

int main() {
    int result1 = calculate(&add, 3, 5); // Call calculate() with add() as argument
    printf("%d\n", result1); // Output: 8
    int result2 = calculate(&subtract, 8, 2); // Call calculate() with subtract() as argument
    printf("%d\n", result2); // Output: 6
    return 0;
}