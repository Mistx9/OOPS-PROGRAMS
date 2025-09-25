#include <stdio.h>

int main() {
    int daysLeft;

    printf("Enter number of days left in your mobile recharge plan: ");
    scanf("%d", &daysLeft);

    if (daysLeft > 3)
        printf("Recharge not urgent. You still have %d days left.\n", daysLeft);
    else if (daysLeft > 0)
        printf(" Reminder: Recharge soon! Only %d days left.\n", daysLeft);
    else
        printf(" Your plan has expired. Please recharge immediately!\n");

    return 0;
}

