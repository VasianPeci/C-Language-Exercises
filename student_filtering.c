#include <stdio.h>

typedef struct {
    char firstName[50];
    char lastName[50];
    char gender;
    int grade;
} Student;

void filterByGrade(Student students[], int n) {
    int threshold;
    printf("\nEnter a grade threshold (4–10): ");
    scanf("%d", &threshold);
    while (threshold < 4 || threshold > 10) {
        printf("Please enter a value between 4 and 10!\n");
        printf("Enter a grade threshold: ");
        scanf("%d", &threshold);
    }

    int count = 0;
    printf("\nStudents with a grade higher than %d:\n", threshold);
    for (int i = 0; i < n; i++) {
        if (students[i].grade > threshold) {
            printf("%d. %s %s, Grade: %d, Gender: %c\n", i + 1,
                   students[i].firstName, students[i].lastName,
                   students[i].grade, students[i].gender);
            count++;
        }
    }

    if (count == 0) {
        printf("No students have a grade higher than %d.\n", threshold);
    }
}

int findMaxGrade(Student students[], int n) {
    int max = students[0].grade;
    for (int i = 1; i < n; i++) {
        if (students[i].grade > max) {
            max = students[i].grade;
        }
    }
    return max;
}

void printMaxGradeStudents(Student students[], int n, int max) {
    int count = 0;
    printf("\nStudents with the maximum grade of %d:\n", max);
    for (int i = 0; i < n; i++) {
        if (students[i].grade == max) {
            printf("%d. %s %s, Grade: %d, Gender: %c\n", i + 1,
                   students[i].firstName, students[i].lastName,
                   students[i].grade, students[i].gender);
            count++;
        }
    }

    if (count == 0) {
        printf("No students have the maximum grade of %d.\n", max);
    }
}

void countByFirstLetter(Student students[], int n) {
    char ch;
    int count = 0;
    printf("\nEnter a starting character: ");
    scanf(" %c", &ch);
    for (int i = 0; i < n; i++) {
        if (students[i].firstName[0] == ch) {
            count++;
        }
    }
    printf("\nNumber of students whose first name starts with '%c': %d\n", ch, count);
}

void filterFemaleByGrade(Student students[], int n) {
    int threshold;
    printf("\nEnter a grade threshold (4–10): ");
    scanf("%d", &threshold);
    while (threshold < 4 || threshold > 10) {
        printf("Please enter a value between 4 and 10!\n");
        printf("Enter a grade threshold: ");
        scanf("%d", &threshold);
    }

    int count = 0;
    printf("\nFemale students with a grade higher than %d:\n", threshold);
    for (int i = 0; i < n; i++) {
        if (students[i].grade > threshold && students[i].gender == 'f') {
            printf("%d. %s %s, Grade: %d, Gender: %c\n", i + 1,
                   students[i].firstName, students[i].lastName,
                   students[i].grade, students[i].gender);
            count++;
        }
    }

    if (count == 0) {
        printf("No female students have a grade higher than %d.\n", threshold);
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    Student students[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter first name of student %d: ", i + 1);
        scanf("%s", students[i].firstName);

        printf("Enter last name of student %d: ", i + 1);
        scanf("%s", students[i].lastName);

        printf("Enter average grade of student %d: ", i + 1);
        scanf("%d", &students[i].grade);

        printf("Enter gender of student %d (m or f): ", i + 1);
        scanf(" %c", &students[i].gender);
    }

    printf("\nStudent list:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s %s, Grade: %d, Gender: %c\n", i + 1,
               students[i].firstName, students[i].lastName,
               students[i].grade, students[i].gender);
    }

    filterByGrade(students, n);
    printMaxGradeStudents(students, n, findMaxGrade(students, n));
    countByFirstLetter(students, n);
    filterFemaleByGrade(students, n);

    return 0;
}
