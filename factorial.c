#include <stdio.h>

int factorial(int n){
    if (n==1 || n==0)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    printf("Enter the number whose factorial will be found: ");
    int n;
    scanf("%d", &n);
    printf("\nYour number's factorial is: %d", factorial(n));
    return 0;
}