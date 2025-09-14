#include <stdio.h>

int main()
{
    int n, rem, rev = 0; // Initialize rev to 0

    printf("Enter the number: ");
    scanf("%d", &n);

    int original_n = n; // Store original number to display

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    printf("Reversed number of %d is: %d\n", original_n, rev);

    return 0;
}