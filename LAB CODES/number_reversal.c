// number_reversal.c
#include <stdio.h>

int main() {
    int num;
    do {
        printf("Enter a positive number (0 to stop): ");
        scanf("%d", &num);
        if (num == 0) break;

        int rev = 0, temp = num;
        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        printf("Reversed: %d\n", rev);
    } while (num != 0);

    return 0;
}
