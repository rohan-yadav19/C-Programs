#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Pointers pointing to the numbers
    ptr1 = &num1;
    ptr2 = &num2;

    // Add the values using pointers
    sum = *ptr1 + *ptr2;

    // Display the result
    printf("Sum = %d\n", sum);

    return 0;
}
