#include <stdio.h>

#define MAX 100

// Define the structure Person
struct Person {
    char firstName[50];
    char lastName[50];
    int age;
};

int main() {
    struct Person people[MAX];
    int n;

    printf("How many people do you want to add? ");
    scanf("%d", &n);

    if(n < 1 || n > MAX) {
        printf("Invalid number of people!\n");
        return 1;
    }

    // Input data from the user
    for(int i = 0; i < n; i++) {
        printf("\nPerson %d:\n", i + 1);
        
        printf("First name: ");
        scanf("%s", people[i].firstName);

        printf("Last name: ");
        scanf("%s", people[i].lastName);

        printf("Age: ");
        scanf("%d", &people[i].age);
    }

    // Display the data
    printf("\n--- List of People ---\n");
    for(int i = 0; i < n; i++) {
        printf("Person %d: %s %s, %d years old\n", i + 1, people[i].firstName, people[i].lastName, people[i].age);
    }

    return 0;
}
