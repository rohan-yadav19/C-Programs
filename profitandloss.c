#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount;

    // Input cost price and selling price
    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    // Calculate profit or loss
    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        printf("Profit = %.2f\n", amount);
    } else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        printf("Loss = %.2f\n", amount);
    } else {
        printf("No Profit No Loss.\n");
    }

    return 0;
}
