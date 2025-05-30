#include <stdio.h>

int main() {
    int choice, n, i, a, b, sum;

    printf("Choose an operation:\n");
    printf("1. Print first N natural numbers\n");
    printf("2. Sum of two numbers\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the value of N: ");
            scanf("%d", &n);
            printf("First %d natural numbers are:\n", n);
            for (i = 1; i <= n; i++) {
                printf("%d ", i);
            }
            printf("\n");
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            sum = a + b;
            printf("Sum = %d\n", sum);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
