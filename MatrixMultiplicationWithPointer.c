 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int row1, col1, row2, col2;
    printf("Enter dimensions of matrix 1 (row column): ");
    scanf("%d %d", &row1, &col1);
    printf("Enter dimensions of matrix 2 (row column): ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2) {
        printf("Invalid dimensions for matrix multiplication!\n");
        return 1;
    }

    // allocate memory for matrix 1
    int **matrix1 = (int **) malloc(row1 * sizeof(int *));
    for (int i = 0; i < row1; i++) {
        matrix1[i] = (int *) malloc(col1 * sizeof(int));
    }

    // allocate memory for matrix 2
    int **matrix2 = (int **) malloc(row2 * sizeof(int *));
    for (int i = 0; i < row2; i++) {
        matrix2[i] = (int *) malloc(col2 * sizeof(int));
    }

    // populate matrix 1
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // populate matrix 2
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // allocate memory for the result matrix
    int **result = (int **) malloc(row1 * sizeof(int *));
    for (int i = 0; i < row1; i++) {
        result[i] = (int *) malloc(col2 * sizeof(int));
    }

    // perform matrix multiplication
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // print the result matrix
    printf("Result:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // free memory
    for (int i = 0; i < row1; i++) {
        free(matrix1[i]);
    }
    free(matrix1);
    for (int i = 0; i < row2; i++) {
        free(matrix2[i]);
    }
    free(matrix2);
    for (int i = 0; i < row1; i++) {
        free(result[i]);
    }
    free(result);

    return 0;
}
