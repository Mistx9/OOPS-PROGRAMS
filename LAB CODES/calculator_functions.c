// calculator.c
#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }
int mod(int a, int b) { return b != 0 ? a % b : 0; }

int main() {
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operation (+ - * / %%): ");
    scanf(" %c", &op);

    switch (op) {
        case '+': printf("Result = %d\n", add(a, b)); break;
        case '-': printf("Result = %d\n", sub(a, b)); break;
        case '*': printf("Result = %d\n", mul(a, b)); break;
        case '/': if (b != 0) printf("Result = %d\n", divide(a, b));
                  else printf("Error: Divide by zero\n"); break;
        case '%': if (b != 0) printf("Result = %d\n", mod(a, b));
                  else printf("Error: Divide by zero\n"); break;
        default: printf("Invalid operation\n");
    }
    return 0;
}
