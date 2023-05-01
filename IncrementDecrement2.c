#include <stdio.h>

int main() {
   int a, b, choice, result;

   printf("Enter two integers to do weird math: ");
   scanf("%d %d", &a, &b);

   printf("Enter your choice:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
   scanf("%d", &choice);

   result = choice == 1 ? ++a + ++b : choice == 2 ? --a - --b : choice == 3 ? ++a * --b : --a / ++b;

   printf("Result: %d\n", result);

   return 0;
}