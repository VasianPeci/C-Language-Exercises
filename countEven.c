#include <stdio.h>

int countEven(int array[], int n){
    if (n == 0) {
        return (array[0] % 2 == 0) ? 1 : 0;
    }
    if (array[n] % 2 == 0) {
        return 1 + countEven(array, n - 1);
    }
    return countEven(array, n - 1);
}

int main (){
    printf("Enter the number of elements in the array: ");
    int n;
    scanf("%d", &n);
    int array[n];
    
    printf("\nEnter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nYour array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    n--;
    printf("\n\nThe number of even numbers in this array is: %d", countEven(array, n));
    return 0;
}
