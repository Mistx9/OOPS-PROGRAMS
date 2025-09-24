#include <stdio.h>

int main() {
    int hours, fee;

    printf("Enter parking duration (in hours): ");
    scanf("%d", &hours);

    if (hours <= 2)
        fee = 20;
    else if (hours <= 5)
        fee = 50;
    else
        fee = 100;

    printf("Parking Fee: ₹%d\n", fee);
    return 0;
}
