#include <stdio.h>

int main()
{
    printf("Enter the number of points you got in the exam: ");
    int points;
    scanf("%d", &points);
    
    if(points >= 0 && points <= 100){
        switch(points/10){
            case 10:
            case 9:
                printf("You took the grade: A");
                break;
            case 8:
                printf("You took the grade: B");
                break;
            case 7:
                printf("You took the grade: C");
                break;
            case 6:
                printf("You took the grade: D");
                break;
            default:
                printf("You took the grade: F");
        }
    } else{
        printf("Points are not correct!");
    }

    return 0;
}
