#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &op);

    (op == '+') ? printf("Result = %d\n", a + b) :
    (op == '-') ? printf("Result = %d\n", a - b) :
    (op == '*') ? printf("Result = %d\n", a * b) :
    (op == '/' && b != 0) ? printf("Result = %d\n", a / b) :
    (op == '%' && b != 0) ? printf("Result = %d\n", a % b) :
    printf("Error: Invalid operator or division by zero\n");

    return 0;
}
