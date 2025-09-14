// library_fine.c
#include <stdio.h>

int main() {
    int due, returned;
    printf("Enter due date (1-30): ");
    scanf("%d", &due);
    printf("Enter returned date (1-30): ");
    scanf("%d", &returned);

    if (returned <= due) {
        printf("No Fine. Returned on time!\n");
    } else {
        int daysLate = returned - due;
        int fine = daysLate * 2;
        printf("Late by %d days. Fine = Rs. %d\n", daysLate, fine);
    }
    return 0;
}