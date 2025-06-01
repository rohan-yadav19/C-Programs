#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    // Input the range
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Perfect square numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        int root = sqrt(i);
        if (root * root == i) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
