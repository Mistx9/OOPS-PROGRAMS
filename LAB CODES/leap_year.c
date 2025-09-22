// leap_year.c
#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    if (scanf("%d", &year) != 1 || year <= 0) {
        printf("Invalid input!\n");
        return 0;
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a Leap Year.\n", year);
    else
        printf("%d is NOT a Leap Year.\n", year);

    return 0;
}
