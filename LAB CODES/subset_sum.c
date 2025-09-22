// subset_sum.c
#include <stdio.h>

void findSubsets(int arr[], int n, int target) {
    int total = 1 << n; // 2^n subsets
    for (int mask = 0; mask < total; mask++) {
        int sum = 0;
        printf("[");
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum += arr[i];
                printf("%d ", arr[i]);
            }
        }
        printf("]");
        if (sum == target) printf(" ✅ sum = %d", target);
        printf("\n");
    }
}

int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("\nSubsets:\n");
    findSubsets(arr, n, target);

    return 0;
}
