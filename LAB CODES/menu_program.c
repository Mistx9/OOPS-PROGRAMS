// menu_program.c
#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Factorial\n2. GCD\n3. LCM\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int n; printf("Enter number: "); scanf("%d", &n);
            printf("Factorial = %d\n", factorial(n));
        } else if (choice == 2) {
            int a, b; printf("Enter two numbers: "); scanf("%d %d", &a, &b);
            printf("GCD = %d\n", gcd(a, b));
        } else if (choice == 3) {
            int a, b; printf("Enter two numbers: "); scanf("%d %d", &a, &b);
            printf("LCM = %d\n", lcm(a, b));
        }
    } while (choice != 4);

    return 0;
}
