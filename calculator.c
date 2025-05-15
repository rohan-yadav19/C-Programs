#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input operation
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume any leftover newline

    // Input operands
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation using if-else
    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid operator.\n");
    }

    return 0;
}
