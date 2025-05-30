#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;

    // Input size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input elements in array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print sum
    printf("Sum of array elements = %d\n", sum);

    return 0;
}
