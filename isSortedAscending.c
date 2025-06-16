#include <stdio.h>

int isSortedAscending(int array[], int n){
    if (n == 1) {
        return 1;
    }
    if (array[n-1] < array[n-2]) {
        return 0;
    }
    return isSortedAscending(array, n-1);
}

int main(){
    int n;
    printf("Enter the number of elements the array must have: ");
    scanf("%d", &n);

    int array[n];
    printf("\nEnter the elements of the array one by one:\n");
    for(int i = 0; i < n; i++){
        printf("Element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("\nThe array you gave is:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n\n");

    if (isSortedAscending(array, n)) {
        printf("The array is sorted.\n");
    } else {
        printf("The array is not sorted.\n");
    }

    return 0;
}
