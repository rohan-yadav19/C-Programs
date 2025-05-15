#include <stdio.h>

int main() {
    float salary, tax = 0;

    // Input salary
    printf("Enter your annual salary: ₹");
    scanf("%f", &salary);

    // Calculate tax based on slabs
    if (salary <= 250000) {
        tax = 0;
    } else if (salary <= 500000) {
        tax = (salary - 250000) * 0.05;
    } else if (salary <= 1000000) {
        tax = (250000 * 0.05) + (salary - 500000) * 0.20;
    } else {
        tax = (250000 * 0.05) + (500000 * 0.20) + (salary - 1000000) * 0.30;
    }

    // Output the result
    printf("Total tax to be paid: ₹%.2f\n", tax);

    return 0;
}
