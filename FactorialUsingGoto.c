#include <stdio.h>

int main() {
    int n, i = 1;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

start:  
    if (i <= n) {
        factorial *= i;
        i++;
        goto start;
    }

    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}
