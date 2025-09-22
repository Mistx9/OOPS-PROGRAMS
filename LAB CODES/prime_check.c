#include <stdio.h>
#include <math.h>

int main() {
    int num, i, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        flag = 0;
    } else {
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        printf("%d is Prime\n", num);
    else
        printf("%d is Not Prime\n", num);

    return 0;
}
