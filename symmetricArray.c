#include <stdio.h>

int isSymmetric(float array[], int n, int i){
    if (i >= n / 2) {
        return 1;
    }
    if (array[i] != array[n - i - 1]) {
        return 0;
    }
    return isSymmetric(array, n, i + 1);
}

int main(){
    int n;
    printf("Enter the number of elements the array must have: ");
    scanf("%d", &n);

    float array[n];
    printf("\nEnter the array elements one by one:\n");
    for (int i = 0; i < n; i++){
        printf("Element %d: ", i + 1);
        scanf("%f", &array[i]);
    }

    printf("\nThe array you gave is:\n");
    for (int i = 0; i < n; i++){
        printf("%.2f ", array[i]);
    }

    if (isSymmetric(array, n, 0)) {
        printf("\nThe array is symmetric.");
    } else {
        printf("\nThe array is not symmetric.");
    }

    return 0;
}