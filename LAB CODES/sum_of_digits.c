#include <stdio.h>

int main() {
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while (num != 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    printf("Sum of digits of %d = %d\n", temp, sum);
    return 0;
}
