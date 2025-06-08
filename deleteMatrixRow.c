#include <stdio.h>
int main() {
    int r, c;
    printf("Write the number of rows: \n");
    scanf("%d",&r);
    printf("\nWrite the number of columns: \n");
    scanf("%d",&c);
    int matrix [r][c];
    printf("\nEnter the values of the matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Write the value of row %d and column %d: \n",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nThe MATRIX is: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nWrite the row you want to delete: ");
    int row;
    scanf("%d",&row);
    row--;
    if (row < 0 || row >= r) {
        printf("Write a valid row number!!");
        return;
    }
    for (int i = row; i < r - 1; i++) {
        for (int j = 0; j < c; j++) {
            matrix[i][j] = matrix[i + 1][j];
        }
    }
    printf("The new MATRIX is: \n");
    for (int i = 0; i < r - 1; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}


