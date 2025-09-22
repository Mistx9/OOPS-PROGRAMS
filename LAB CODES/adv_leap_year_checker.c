#include <stdio.h>

int main() {
    int year, count = 0;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year\n", year);
    } else {
        printf("%d is Not a Leap Year\nNext 5 leap years: ", year);
        int next = year + 1;
        while (count < 5) {
            if ((next % 4 == 0 && next % 100 != 0) || (next % 400 == 0)) {
                printf("%d ", next);
                count++;
            }
            next++;
        }
        printf("\n");
    }
    return 0;
}
