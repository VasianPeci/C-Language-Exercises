#include <stdio.h>
#include <ctype.h>

int main(){
    char questions[][200]={"1. What country has the highest life expectancy? ",
    "2. What was the name of the crime boss who was head of the feared Chicago Outfit? ",
    "3. Who was the Ancient Greek God of the Sun? ",
    "4. How many minutes are in a full week? "
    };

    char options[][200]={"a. Hong Kong","b. Albania","c. Germany","d. USA",
                        "a. Lucky Luciano","b. Toto Rina","c. Johnny Torrio","d. Al Capone",
                        "a. Zeus","b. Hades","c. Apollo","d. Poseidon",
                        "a. 8,700","b. 24,000","c. 10,080","d. 20,000",
};
char answers[4]={'a','d','c','c'};
char answer;
int numberofq=sizeof(questions)/sizeof(questions[0]);
int correct=0;
printf("\nWelcome to the quiz, here are some general knowledge questions: \n\n");
for (int i = 0; i < numberofq; i++)
{
    printf("\n%s\n",questions[i]);
    printf("\nHere are the options: \n");
    for(int j=4*i;j<numberofq*(i+1);j++){
        printf("%s\n",options[j]);
    }
    do
    {
        printf("Write your answer (a,b,c,d) : ");
        scanf(" %c",&answer);
        answer=tolower(answer);
    } while (answer!='a' && answer!='b' && answer!='c' && answer!='d');
    
    if(answer==answers[i]){
        correct++;
    }
}
printf("\nThe correct answers were: %d/4",correct);

return 0;

}

