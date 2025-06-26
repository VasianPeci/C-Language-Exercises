#include <stdio.h>

int countPositiveOdd(int v[], int n) {
    if (n < 0) {
        return 0;
    }
    if ((v[n] % 2 == 1 || v[n] % 2 == -1) && (v[n] > 0)) {
        return 1 + countPositiveOdd(v, n - 1);
    }
    return countPositiveOdd(v, n - 1);
}

int main() {
    printf("Enter the number of elements: ");
    int n;
    scanf("%d", &n);

    int v[n];

    printf("\nEnter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    n--;

    printf("\nThe number of positive odd numbers in the array is: %d\n", countPositiveOdd(v, n));
    return 0;
}
