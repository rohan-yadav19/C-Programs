#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student students[5];

    // Input student details
    printf("Enter details for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name);  // reads string with spaces

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student details
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
