#include <stdio.h>

#define MAX 100

int matrixSum(int matrix[][MAX], int row, int col, int totalCols);

int main() {
    int n, m;
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &n);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &m);
    int matrix[MAX][MAX];

    printf("\nEnter the elements of the matrix one by one: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("Element in row %d and column %d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n\nSum of matrix elements is: %d\n", matrixSum(matrix, n-1, m, m));
    return 0;
}

int matrixSum(int matrix[][MAX], int row, int col, int totalCols) {
    if(row == 0 && col == 1){
        return matrix[0][0];
    }
    if(col == 1){
        return matrix[row][0] + matrixSum(matrix, row - 1, totalCols, totalCols);
    }
    return matrix[row][col - 1] + matrixSum(matrix, row, col - 1, totalCols);
}
