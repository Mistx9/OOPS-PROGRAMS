#include <stdio.h>

int main() {
    int distance, fare;

    printf("Enter distance travelled (in km): ");
    scanf("%d", &distance);

    if (distance <= 5)
        fare = 10;
    else if (distance <= 15)
        fare = 20;
    else if (distance <= 30)
        fare = 30;
    else
        fare = 50;

    printf("Total bus fare: ₹%d\n", fare);
    return 0;
}
