#include <stdio.h>
 
int main() {
    int mat[3][3];
    int sum = 0;
     
    printf("Enter elements of the square matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
            if (i == j) {
                sum += mat[i][j];
            }
        }
    }
     
    printf("Sum of main diagonal elements: %d\n", sum);
     
    return 0;
}