#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {  // Loop for rows
        for (j = 1; j <= i; j++) {  // Loop for stars
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
