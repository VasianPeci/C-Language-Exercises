#include <stdio.h>
int main(){
    int n,i,j,h;
    printf("Write the max number of stars which will be displayed in the last row: ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        for(h=1;h<=n-i-1;h++){
            printf(" ");
        }
        for(j=1;j<=i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}