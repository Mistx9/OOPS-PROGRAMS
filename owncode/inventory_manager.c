// inventory_manager.c
#include <stdio.h>
#include <string.h>

struct Item {
    char name[30];
    int qty;
    float price;
};

int main() {
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item items[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name, quantity and price of item %d: ", i + 1);
        scanf("%s %d %f", items[i].name, &items[i].qty, &items[i].price);
    }

    printf("\n--- Inventory Report ---\n");
    float totalValue = 0;
    for (int i = 0; i < n; i++) {
        float value = items[i].qty * items[i].price;
        printf("%s -> Qty: %d, Price: %.2f, Total: %.2f\n", items[i].name, items[i].qty, items[i].price, value);
        totalValue += value;
    }
    printf("Total Inventory Value = Rs. %.2f\n", totalValue);

    return 0;
}