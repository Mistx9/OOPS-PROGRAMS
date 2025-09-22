#include <stdio.h>
#include <math.h>

int main() {
    float r1, i1, r2, i2, mag1, mag2;

    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &r1, &i1);

    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &r2, &i2);

    mag1 = sqrt(r1 * r1 + i1 * i1);
    mag2 = sqrt(r2 * r2 + i2 * i2);

    if (mag1 > mag2)
        printf("First complex number is larger.\n");
    else if (mag2 > mag1)
        printf("Second complex number is larger.\n");
    else
        printf("Equal\n");

    return 0;
}
