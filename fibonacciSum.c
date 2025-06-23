#include <stdio.h>

int fibonacci(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;

    int a = 0, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("Enter how many Fibonacci numbers to sum: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a number >= 1.\n");
        return 1;
    }

    int sum = fibonacci(n + 2) - 1;
    printf("The sum of the first %d Fibonacci numbers is: %d\n", n, sum);

    return 0;
}
