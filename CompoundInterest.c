#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest, amount;

    // Input from user
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual rate of interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    // Compound Interest formula
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Output the result
    printf("Compound Interest = %.2lf\n", compoundInterest);
    printf("Total Amount = %.2lf\n", amount);

    return 0;
}
