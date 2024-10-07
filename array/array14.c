include <stdio.h>
 
int main() {
    int matrix1[100][100], matrix2[100][100];
    int rows1, cols1, rows2, cols2;
 
    // Input the number of rows and columns of the first matrix
    printf("Enter the number of rows of the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns of the first matrix: ");
    scanf("%d", &cols1);
 
    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        printf("Enter elements for row %d:\n", i + 1);
        for (int j = 0; j < cols1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
 
    // Input the number of rows and columns of the second matrix
    printf("\nEnter the number of rows of the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns of the second matrix: ");
    scanf("%d", &cols2);
 
    // Check if the dimensions of the two matrices are equal
    if (rows1 != rows2 || cols1 != cols2) {
        printf("\nThe matrices are not equal (different dimensions).\n");
        return 0;
    }
 
    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        printf("Enter elements for row %d:\n", i + 1);
        for (int j = 0; j < cols2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
 
    // Check if the elements of the two matrices are equal
    int isEqual = 1; // Assume matrices are equal
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                isEqual = 0; // Matrices are not equal
                break;
            }
        }
        if (!isEqual) {
            break;
        }
    }
 
    // Print the result
    if (isEqual) {
        printf("\nThe matrices are equal.\n");
    } else {
        printf("\nThe matrices are not equal.\n");
    }
 
    return 0;
}