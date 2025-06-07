#include <stdio.h>

int main() {
    int decimal, binary[32], i = 0;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Convert decimal to binary
    if (decimal == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    // Print binary in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
