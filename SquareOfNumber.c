#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square = %d\n", square(num));
    return 0;
}
