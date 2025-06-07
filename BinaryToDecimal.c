#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, i = 0, remainder;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Convert binary to decimal
    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
        i++;
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
