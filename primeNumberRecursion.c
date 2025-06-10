#include <stdio.h>

int primeNumber(int n, int i){
    if(n % i == 0 && i != 1){
        return 0;
    }
    else if (i == 1)
    {
        return 1;
    }
    
    return primeNumber(n, i-1);
}

int main(){
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);

    if(n <= 1){
        printf("\nNumber %d is not a prime number.", n);
        return 0;
    }

    if(primeNumber(n, n-1) == 0){
        printf("\nNumber %d is not a prime number.", n);
    }

    else{
        printf("\nNumber %d is a prime number.", n);
    }
    
    return 0;
}