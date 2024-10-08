#include <stdio.h>
 
int main() {
    int mat[3][3], rowSum[3] = {0}, colSum[3] = {0};
     
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
            colSum[j] += mat[i][j];
        }
    }
     
    printf("Sum of each row:\n");
    for (int i = 0; i < 3; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }
     
    printf("Sum of each column:\n");
    for (int j = 0; j < 3; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }
     
    return 0;
}