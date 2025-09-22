#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    (a == 0) ? printf("Invalid: not a quadratic equation.\n") :
    (
        d = b*b - 4*a*c,
        (d > 0) ? printf("Roots are real and distinct: %.2f, %.2f\n", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a)) :
        (d == 0) ? printf("Roots are real and equal: %.2f\n", -b/(2*a)) :
        printf("Roots are imaginary\n")
    );

    return 0;
}
