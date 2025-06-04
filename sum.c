#include <stdio.h>

int main() {
    int start, end, sum = 0;

    // Input the range
    printf("Enter the starting number: ");
    scanf("%d", &start);
    
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Ensure start is less than or equal to end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    // Calculate the sum
    for (int i = start; i <= end; i++) {
        sum += i;
    }

    // Display the result
    printf("Sum of numbers between %d and %d = %d\n", start, end, sum);

    return 0;
}
