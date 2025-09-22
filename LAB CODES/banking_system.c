#include <stdio.h>

int main() {
    int choice;
    float balance = 0, amt;

    while (1) {
        printf("\n1. Deposit\n2. Withdraw\n3. Balance Inquiry\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amt);
                balance += amt;
                printf("Deposited. Balance = %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amt);
                if (amt > balance)
                    printf("Insufficient Balance!\n");
                else {
                    balance -= amt;
                    printf("Withdrawn. Balance = %.2f\n", balance);
                }
                break;
            case 3:
                printf("Current Balance = %.2f\n", balance);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
