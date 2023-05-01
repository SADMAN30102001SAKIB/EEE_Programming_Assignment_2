#include <stdio.h>

int main() {
   int arr[] = {1, 2, 3, 4, 5};
   int i, j, temp;

   printf("Original array elements: ");
   for (i = 0; i < 5; i++) {
      printf("%d ", arr[i]);
   }
   printf("\n");

   for (i = 0, j = 4; i < j; i++, j--) {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
   }

   printf("Reversed array elements: ");
   for (i = 0; i < 5; i++) {
      printf("%d ", arr[i]);
   }
   printf("\n");

   return 0;
}