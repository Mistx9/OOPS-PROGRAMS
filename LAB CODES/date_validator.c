#include <stdio.h>

int isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int d, m, y, valid = 1;
    int daysInMonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    printf("Enter date (DD-MM-YYYY): ");
    scanf("%d-%d-%d", &d, &m, &y);

    if (isLeap(y)) daysInMonth[2] = 29;
    if (m < 1 || m > 12 || d < 1 || d > daysInMonth[m])
        valid = 0;

    if (!valid) {
        printf("Invalid Date\n");
        return 0;
    }

    // Zeller's congruence formula
    int q = d, mm = (m < 3) ? m + 12 : m, yy = (m < 3) ? y - 1 : y;
    int h = (q + (13*(mm+1))/5 + yy + yy/4 - yy/100 + yy/400) % 7;
    // 0=Saturday, 1=Sunday, ... 6=Friday

    printf("Valid Date. Day = ");
    switch(h) {
        case 0: printf("Saturday\n"); break;
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
    }
    return 0;
}
