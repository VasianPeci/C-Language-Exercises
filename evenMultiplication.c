#include <stdio.h>

int evenMultiplication(int n) {
    if (n == 0) {
        return 1;
    }
    return (2 * n) * evenMultiplication(n - 1);
}

int main() {
    printf("Write the number of first even numbers of which you want to find the multiplication: ");
    int n;
    scanf("%d", &n);
    printf("\nMultiplication of the first %d even numbers is: %d", n, evenMultiplication(n));
    return 0;
}
