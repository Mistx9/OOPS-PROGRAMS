#include <stdio.h>

int main() {
    int choice, qty;
    float total = 0;

    printf("Cafeteria Menu:\n");
    printf("1. Tea - ₹10\n");
    printf("2. Coffee - ₹20\n");
    printf("3. Sandwich - ₹50\n");
    printf("4. Burger - ₹80\n");
    printf("Enter item number (0 to stop): ");

    while (1) {
        scanf("%d", &choice);
        if (choice == 0) break;

        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch (choice) {
            case 1: total += qty * 10; break;
            case 2: total += qty * 20; break;
            case 3: total += qty * 50; break;
            case 4: total += qty * 80; break;
            default: printf("Invalid choice!\n");
        }
        printf("Enter next item (0 to stop): ");
    }

    printf("Total bill: ₹%.2f\n", total);
    return 0;
}
