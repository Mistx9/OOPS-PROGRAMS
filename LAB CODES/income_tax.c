// income_tax.c
#include <stdio.h>

int main() {
    double income, tax = 0;
    printf("Enter annual income: ");
    scanf("%lf", &income);

    if (income <= 250000) tax = 0;
    else if (income <= 500000) tax = 0.05 * (income - 250000);
    else if (income <= 1000000) tax = 12500 + 0.20 * (income - 500000);
    else tax = 112500 + 0.30 * (income - 1000000);

    printf("Income Tax = ₹%.2lf\n", tax);
    return 0;
}
