// pairs_sum_square.c
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int x = 0; x <= sqrt(n); x++) {
        for (int y = 0; y <= sqrt(n); y++) {
            if (x*x + y*y == n) {
                printf("(%d, %d)\n", x, y);
                continue; // avoid extra checks
            }
        }
    }
    return 0;
}
