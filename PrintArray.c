#include <stdio.h>

int main() {
    int arr[100], n, i;

    // Input size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input elements in array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements
    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
