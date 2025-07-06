#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PERSONS 3

// Structure for a person
struct Person {
    char firstName[20];
    char lastName[20];
    int age;
} people[MAX_PERSONS];

// Find the oldest age
int oldest_person(struct Person p[]) {
    int max = 0;
    for (int i = 0; i < MAX_PERSONS; i++) {
        if (p[i].age > max) {
            max = p[i].age;
        }
    }
    return max;
}

// Compare adjacent first names alphabetically
void compare_first_names(struct Person p[]) {
    for (int i = 0; i < MAX_PERSONS - 1; i++) {
        int cmp = strcmp(p[i].firstName, p[i + 1].firstName);
        if (cmp > 0) {
            printf("\nName %s comes after %s", p[i].firstName, p[i + 1].firstName);
        } else if (cmp == 0) {
            printf("\nNames %s and %s are the same", p[i].firstName, p[i + 1].firstName);
        } else {
            printf("\nName %s comes before %s", p[i].firstName, p[i + 1].firstName);
        }
    }
}

// Print one person's data (first name lowercase, last name uppercase)
struct Person print_data(struct Person person) {
    printf("\nFirst Name: %s", strlwr(person.firstName));
    printf("\nLast Name: %s", strupr(person.lastName));
    printf("\nAge: %d", person.age);
    return person;
}

// Count how many names start with a specific character
void count_names_starting_with(struct Person person[], int n) {
    printf("\nEnter a character: ");
    char ch;
    int counter = 0;
    scanf(" %c", &ch);
    ch = tolower(ch);
    for (int i = 0; i < n; i++) {
        if (tolower(person[i].firstName[0]) == ch) {
            counter++;
        }
    }
    printf("\nNumber of people whose name starts with '%c': %d", ch, counter);
}

// Find the person with the longest last name
struct Person longest_lastname(struct Person person[]) {
    int max = strlen(person[0].lastName);
    int index = 0;
    for (int i = 1; i < MAX_PERSONS; i++) {
        if (strlen(person[i].lastName) > max) {
            max = strlen(person[i].lastName);
            index = i;
        }
    }
    return person[index];
}

int main() {
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("Enter first name of person %d: ", i + 1);
        scanf("%s", people[i].firstName);

        printf("Enter last name of person %d: ", i + 1);
        scanf("%s", people[i].lastName);

        printf("Enter age of person %d: ", i + 1);
        scanf("%d", &people[i].age);
    }

    printf("\nOldest age: %d", oldest_person(people));
    
    compare_first_names(people);

    for (int i = 0; i < MAX_PERSONS; i++) {
        print_data(people[i]);
    }

    count_names_starting_with(people, MAX_PERSONS);

    printf("\nPerson with the longest last name: %s", longest_lastname(people).lastName);

    return 0;
}