#include <stdio.h>
 
int main() {
    int matrix[100][100];
    int rows, cols, nonZeroCount = 0;
 
    // Input the number of rows and columns of the matrix
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &cols);
 
    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        printf("Enter elements for row %d:\n", i + 1);
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] != 0) {
                nonZeroCount++;
            }
        }
    }
 
    // Determine if the matrix is sparse
    if (nonZeroCount < (rows * cols) / 2) {
        printf("\nThe matrix is a sparse matrix.\n");
    } else {
        printf("\nThe matrix is not a sparse matrix.\n");
    }
 
    return 0;
}