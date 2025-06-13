#include <stdio.h>

int length(char s[]){
    int c=0;
    while (s[c]!='\0')
    {
        c++;
    }
    return c;
    
}

int main(){
    printf("Enter a single word: ");
    char string[10];
    scanf("%s", string);
    printf("\n\nThe length of the word is: %d", length(string));
    return 0;
}