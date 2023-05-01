#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    return x / y;
}

int main() {
    int (*op)(int, int);
    int x, y;
    char choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &choice);

    switch(choice) {
        case '+':
            op = add;
            break;
        case '-':
            op = subtract;
            break;
        case '*':
            op = multiply;
            break;
        case '/':
            op = divide;
            break;
        default:
            printf("Invalid operation\n");
            return 1;
    }

    printf("Result: %d\n", op(x, y));

    return 0;
}