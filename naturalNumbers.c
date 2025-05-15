#include <stdio.h>

// Recursive function to print natural numbers from 1 to n
void printNatural(int n) {
    if (n == 0)
        return;
    printNatural(n - 1);  // Recursive call
    printf("%d ", n);     // Print after recursive call to maintain order
}

int main() {
    int N;

    // Input value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("First %d natural numbers:\n", N);
    printNatural(N);

    return 0;
}
