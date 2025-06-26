#include <stdio.h>

int sum(int v[], int n) {
    if (n == 0) {
        return v[0];
    }
    return v[n] + sum(v, n - 1);
}

void printReverse(int v[], int i, int n) {
    if (i < n) {
        printReverse(v, i + 1, n);
        printf("%d ", v[i]);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int v[n];
    printf("\nEnter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nYour array in reverse is:\n");
    printReverse(v, 0, n);

    int total = sum(v, n - 1);
    printf("\n\nThe sum of the array elements is: %d\n", total);

    return 0;
}
