#include <stdio.h>

// Define structure for student
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter student roll number: ");
    scanf("%d", &s.rollNumber);

    printf("Enter student name: ");
    scanf(" %[^\n]", s.name); // Reads string with spaces

    printf("Enter student marks: ");
    scanf("%f", &s.marks);

    // Display student details
    printf("\n--- Student Record ---\n");
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Name       : %s\n", s.name);
    printf("Marks      : %.2f\n", s.marks);

    return 0;
}
