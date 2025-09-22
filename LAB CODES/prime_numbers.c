// prime_numbers.c
#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0) return 0;
    return 1;
}

int main() {
    int n, i = 2;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers <= %d:\n", n);
    while (i <= n) {
        if (isPrime(i)) printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}
