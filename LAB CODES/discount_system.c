#include <stdio.h>

int main() {
    float amt, final;
    printf("Enter purchase amount: ");
    scanf("%f", &amt);

    final = (amt < 100) ? amt :
            (amt <= 500) ? amt * 0.90 :
            (amt <= 1000) ? amt * 0.85 :
            amt * 0.80;

    printf("Final price after discount = %.2f\n", final);
    return 0;
}
