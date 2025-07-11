#include <stdio.h>

int main(void) {
    int account_number;
    char name[30];
    double balance;
    FILE *fp;

    if ((fp = fopen("clients.txt", "w")) == NULL) {
        printf("The file cannot be opened!\n");
    } else {
        printf("Enter the account number, name, and balance.\n");
        printf("Enter EOF (Ctrl + D in Linux/macOS or Ctrl + Z in Windows) to stop input.\n");
        printf("? ");
        scanf("%d %s %lf", &account_number, name, &balance);

        while (!feof(stdin)) {
            fprintf(fp, "%d %s %.2f\n", account_number, name, balance);
            printf("\nEnter the account number, name, and balance ? ");
            scanf("%d %s %lf", &account_number, name, &balance);
        }

        fclose(fp);
    }

    return 0;
}
