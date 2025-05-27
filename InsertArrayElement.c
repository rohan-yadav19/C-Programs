#include <stdio.h>

int main() {
    int arr[100], n, i, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input original array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to insert at the beginning
    printf("Enter the element to insert at the beginning: ");
    scanf("%d", &element);

    // Shift all elements to the right
    for(i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the beginning
    arr[0] = element;
    n++; // Increase the size of the array

    // Display the updated array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
