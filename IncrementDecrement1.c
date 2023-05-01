#include <stdio.h>

int main() {
   int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
   int i, j;

   printf("Array elements:\n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf("%d ", arr[i][j]);
      }
      printf("\n");
   }

   printf("Array elements incremented by 1:\n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         arr[i][j]++;  // Increment each element by 1
         printf("%d ", arr[i][j]);
      }
      printf("\n");
   }

   return 0;
}