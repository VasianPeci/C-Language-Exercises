#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of rows and columns of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];

    printf("\n\nNow enter the matrix elements one by one: \n\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Element of row %d and column %d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n\nThe matrix is: \n\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int matrix2[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            matrix2[i][j] = matrix[j][i];
        }
    }

    int matrix3[n][n];
    printf("\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            matrix3[i][j] = matrix2[n-i-1][j];
        }
    }

    printf("The matrix rotated 90deg in anticlockwise direction is: \n\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}