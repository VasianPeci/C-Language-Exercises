#include <stdio.h>

int main(){
    int n,i,j,h;
    printf("Enter the max number of rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for(h = 1; h <= n-i-1; h++){
            printf(" ");
        }
        for(j = 1; j <= i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
