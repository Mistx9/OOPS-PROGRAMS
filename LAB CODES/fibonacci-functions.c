#include <stdio.h>

// Function to generate Fibonacci series
void generateFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int num;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    // Call the function to generate Fibonacci series
    generateFibonacci(num);

    return 0;
}