#include <stdio.h>
#include <ctype.h>

int main() {
    // 0 represents the initial direction of the switches, 1 is the alternate direction
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    int c = 0;       // number of balls passing through switch x2
    char input;
    int output;      // output 'C' will be value 0 and output 'D' will be 1
    int points = 0;
    int n;

    printf("\nEnter the number of consecutive ball throws: ");
    scanf("%d", &n);

    if (n >= 0) {
        printf("\nEnter the throw gate (A or B): ");
        scanf(" %c", &input);
        input = toupper(input);

        for (int i = 1; i <= n; i++) {
            if (input == 'A') {
                if (x1 == 0) {
                    output = 0;
                    points += output;
                    x1 = 1;
                }
                else if (x1 == 1 && x2 == 0) {
                    output = 0;
                    points += output;
                    x1 = 0;
                    c++;
                    if (c % 2 == 0) {
                        x2 = 1;
                    }
                }
                else {
                    output = 1;
                    points += output;
                    x1 = 0;
                    c++;
                    if (c % 2 == 0) {
                        x2 = 0;
                    }
                }
            }
            else if (input == 'B') {
                if (x3 == 1) {
                    output = 1;
                    points += output;
                    x3 = 0;
                }
                else if (x3 == 0 && x2 == 0) {
                    output = 0;
                    points += output;
                    x3 = 1;
                    c++;
                    if (c % 2 == 0) {
                        x2 = 1;
                    }
                }
                else {
                    output = 1;
                    points += output;
                    x3 = 1;
                    c++;
                    if (c % 2 == 0) {
                        x2 = 0;
                    }
                }
            }
            else {
                printf("\nThe gate must be A or B!\n");
                i = n;
                return 0;
            }
        }

        printf("\nPoints after %d consecutive throws into gate %c are: %d", n, input, points);
    }
    else {
        printf("\nPlease enter a non-negative number!");
    }

    return 0;
}
