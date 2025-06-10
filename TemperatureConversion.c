#include <stdio.h>
#include <ctype.h>

int main(){ 
    char unit;
    float temp;
    printf("What unit do you want the temperature to be?: (F) or (C)  ");
    scanf("%c",&unit);
    unit=toupper(unit);
    if(unit=='F'){
        printf("\nWhat value do you want the temperature in Fahrenheit to be?: ");
        scanf("%f",&temp);
        temp=(temp-32)*5/9;
        printf("\nTemp in Celsius is: %.2f",temp);

    }
    else if(unit=='C'){
        printf("\nWhat value do you want the temperature in Celsius to be?: ");
        scanf("%f",&temp);
        temp=(temp*9*0.2)+32;
        printf("\nTemp in Fahrenheit is: %.2f",temp);
    }
    else{
        printf("\nWrong unit");
    }
    return 0;
}